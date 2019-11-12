#include <string>
#include <iostream>
#include <sstream>
#include <vector>
#include "Date.h"

// constructor definition 
Date::Date(int m, int d, int y){
  setDate(m, d, y);
}

void Date::setDate(int m, int d, int y){
  setYear(y); // set year first 
  setMonth(m); // then set month 
  setDay(d); // finally set day which depends on year type and month
}

void Date::setYear(int y){
  // check valid range
  if (y > 1900){
    year = y; // set value of data member 
    setLeapYear(); // call separate function for leap year
  }
}

void Date::setLeapYear() {
  
  if (year%4 == 0){ // if divisible by 4?
    if (year%100 == 0 && year%400 == 0){ 
      leapyear = true; // divisible by 4, 100 and 400
    }
    else if (year%100 == 0 && year%400 != 0){ 
      leapyear = false; // divisible by 4 and 100 but not 400
    }
    else{ // divisible by 4 but not by 100
      leapyear = true; // divisible by 4 but not 100
    }
  }
  else{ // not divisible by 4
    leapyear = false; // not a leap year 
  }
}


void Date::setMonth(int m){
  if (m >= 1 && m <= 12){
    month = m; // set value of data member
  }
}

void Date::setDay(int d){
  int maxday;
  // if month with 30 days 
  if (month == 4 || month == 6 || month == 9 || month == 11){
    maxday = 30;
  }
  // if February 
  else if (month == 2){
    maxday = (leapyear) ? 29 : 28;
  }
  // if any other month (31 days)
  else{
    maxday = 31;
  }
  if (d >= 1 && d <= maxday){
    day = d; // set value of data member 
  }
}

int Date::getYear() const{
  return year;
}

int Date::getMonth() const{
  return month;
}

int Date::getDay() const{
  return day;
}

std::string Date::toString() const{
  std::ostringstream output;

  output << month << '/' << day << '/' << year;

  return output.str();
}

std::string Date::fullDisplay() const{
  std::ostringstream output;

  std::vector<std::string> months {"invalid", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

  output << months[month] << " " << day << ", " << year;

  return output.str(); 
}
