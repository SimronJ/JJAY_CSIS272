#include <string>

#ifndef TIME_H
#define TIME_H

class Time{

  friend class Timestamp;
  
  // overload for << declared as friend 
  friend std::ostream& operator << (std::ostream&, Time&);
 
public:
  // constructors
  // constructor that takes 3 int values 
  // default values of 0
  Time (int = 0, int = 0, int = 0); 
  // set functions
  void setTime(int, int, int);
  // get functions
  int getHour() const;
  int getMinute() const;
  int getSecond() const; 
  // display functions
  std::string toAMPMformat() const;
  // overloads 
  bool operator == (const Time&);
  bool operator != (const Time&);


private:

  // data members
  int hour{0}; // initialize to 0
  int minute{0}; 
  int second{0};
  // private helper functions
  // only used internally by class 
  void setHour(int);
  void setMinute(int);
  void setSecond(int);
 
};

#endif