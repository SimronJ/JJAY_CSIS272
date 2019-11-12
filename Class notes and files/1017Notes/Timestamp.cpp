#include <string>
#include <sstream>
#include <iostream>
#include "Timestamp.h"

using namespace std;

Timestamp::Timestamp(Date d, Time t)
: date{d}, timeofday{t}//intializer list
{}// leave empty - no validation or other code

//6/7/2018 23:59
Timestamp::Timestamp(string ts){
    int m, d, y, hr, min;
    char x; //dump / and;
    istringstream raw{ts};
    raw >> m >> x >> d >> x >> y >> x >> hr >> x >> min;
    date.setDate(m, d, y);
    // because timestamp is friend. can access private time functions 
    timeofday.setHour(hr);
    timeofday.setMinute(min);
}

void Timestamp::setTimestamp(string ts){
    int m, d, y, hr, min;
    char x; //dump / and;
    istringstream raw{ts};
    raw >> m >> x >> d >> x >> y >> x >> hr >> x >> min;
    date.setDate(m, d, y);
    // because timestamp is friend. can access private time functions 
    timeofday.setHour(hr);
    timeofday.setMinute(min);
}

string Timestamp(){
    return date.toString();
}