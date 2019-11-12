#include "Time.h"
#include "Date.h"

#ifndef TIMESTAMP_H
#define TIMESTAMP_H

class Timestamp {

public:
    Timestamp(Date, Time);// sperate date/time
    Timestamp(std::string);// take in string
    Timestamp(){}//default constructor

    void setTimestamp(std::string);//set timestamp

    std::string print() const; // string 

private:
 Date date{};
 Time timeofday{};

};


#endif 