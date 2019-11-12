#include <string>

#ifndef DATE_H
#define DATE_H

class Date{

public:
  friend class Timestamp;
  // constructor, 3 int values
  Date (int, int, int); 
  Date(){}
  // member functions
  void setDate(int, int, int); 
  int getYear() const;
  int getMonth() const;
  int getDay() const;
  std::string toString() const; // m/d/y format
  std::string fullDisplay() const; // with name of month 

private: 
  // data members
  int year{0}; // initialize to 0
  int month{0};
  int day{0};
  bool leapyear{false};
  // private "helper/utility" functions 
  void setYear(int);
  void setMonth(int);
  void setDay(int);
  void setLeapYear(); // check if leap year and set value
};


#endif