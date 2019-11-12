#include <string>
#include <sstream>
#include <iostream>
#include "Timestamp.h"


// constructor 
Timestamp::Timestamp(Date d, Time t)
: date{d}, timeofday{t} // initializer list
{}

// constructor
Timestamp::Timestamp(std::string ts){
  //  6/7/2018 23:59
  int m, d, y, hr, min;
  char x;
  std::istringstream raw{ts};
  raw >> m >> x >> d >> x >> y >> hr >> x >> min;
  date.setDate(m, d, y);
  timeofday.setHour(hr);
  timeofday.setMinute(min);

}

void Timestamp::setTimestamp(std::string ts){
  int m, d, y, hr, min;
  char x;
  std::istringstream raw{ts};
  raw >> m >> x >> d >> x >> y >> hr >> x >> min;
  date.setDate(m, d, y);
  timeofday.setHour(hr);
  timeofday.setMinute(min);
}

std::string Timestamp::print() const{
  return date.toString() + " " + timeofday.toAMPMformat();
}

// overload 


std::ostream& operator<< (std::ostream& output, Timestamp ts){
  output << ts.date << " " << ts.timeofday;

  return output;
}

bool Timestamp::operator == (const Timestamp& rhs){
  // compare dates and tines
  if (this->date == rhs.date && this->timeofday == rhs.timeofday)
    return true;
  else 
    return false;
}

bool Timestamp::operator != (const Timestamp& rhs){
  // return opposite of result of == comparison
  return !(*this == rhs);
}