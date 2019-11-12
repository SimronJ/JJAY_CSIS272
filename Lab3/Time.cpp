#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>
#include "Time.h"

using namespace std;

// constructor to take three int values
Time::Time(int hour, int minute, int second){
  setTime(hour, minute, second);
}

Time::Time(string hms){
    istringstream formatsperator{ hms };
    char c;
    formatsperator >> hour >> c >> minute >> c >> second;
}

void Time::setTime(int h, int m, int s){
    setHour(h);
    setMinute(m);
    setSecond(s);
}

void Time::setHour(int h){
  if (h >= 0 && h < 24){
    hour = h;
  }
  else{
    std::cout << "\nInvalid hour value " << h << "\n";
  }
}

void Time::setMinute(int m){
  if (m >= 0 && m < 60){
    minute = m;
  }
  else{
    std::cout << "\nInvalid minute value " << m << "\n";
  }
}

void Time::setSecond(int s){
    if (s >= 0 && s < 60){
        second = s;
    }
    else{
        std::cout << "\nInvalid minute value " << s << "\n";
    }
}

int Time::getHour() const {
  return hour;
}

int Time::getMinute() const {
  return minute;
}

int Time::getSecond() const{
    return second;
}

std::string Time::toAMPMformat() const{
  std::ostringstream output;

  output << std::setfill('0') << std::setw(2) 
  << ((hour == 0 || hour == 12) ? 12 : hour % 12) 
  << ":" << std::setw(2) << minute 
  << ":" << std::setw(2) << second 
  << (hour < 12 ? " AM" : " PM");
  
  return output.str();

}

string Time::to24format() const{
    ostringstream output;
    output << setfill('0') << setw(2) << hour << "::" << setw(2) << minute << "::"  << setw(2) << second;

    return output.str();
}