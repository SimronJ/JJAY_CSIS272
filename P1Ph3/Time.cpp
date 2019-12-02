#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>
#include "Time.h"

// overload << for cout 
std::ostream& operator << (std::ostream& output, Time& t){
  output << std::setfill('0') << std::setw(2) << t.hour << ":" << std::setw(2) << t.minute << ":" << std::setw(2) << t.second;
  
  return output;
}

// overload equality operators 
bool Time::operator == (const Time& rhs){
  if (this->hour == rhs.hour && this->minute == rhs.minute && this->second == rhs.second)
    return true;
  else 
    return false;
}

bool Time::operator != (const Time& rhs){
  // return opposite of value returned from ==
  return !(*this == rhs);
}

// constructors
Time::Time(int h, int m, int s){
  setTime(h, m, s);
}

// define member functions
void Time::setTime(int h, int m, int s){
  setHour(h);
  setMinute(m);
  setSecond(s);
}

void Time::setHour(int h){
  if (h >= 0 && h <= 23){
    hour = h;
  }
  else{
    std::cout << h << " is not valid\n";
  }
}

void Time::setMinute(int m){
  if (m >= 0 && m <= 59){
    minute = m;
  }
  else{
    std::cout << m << " is not valid\n";
  }
}

void Time::setSecond(int s){
  if (s >= 0 && s <= 59){
    second = s;
  }
  else{
    std::cout << s << " is not valid\n";
  }
}

int Time::getHour() const{
  return hour;
}

int Time::getMinute() const{
  return minute;
}

int Time::getSecond() const{
  return second;
}

std::string Time::toAMPMformat() const{
  std::ostringstream output;

  output << std::setfill('0') << std::setw(2) 
  << ((hour == 0 || hour == 12) ? 12 : hour % 12) 
  << ":" 
  << std::setw(2) << minute 
  << ":" 
  << std::setw(2) << second 
  << (hour < 12 ? " AM" : " PM");
  
  return output.str();

}