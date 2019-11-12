#include <string>

#ifndef TIME_H
#define TIME_H

class Time{

public:
  
  // constructors
  Time (int = 0, int = 0, int = 0);
  Time (std::string); // lab 3 define  

  // set functions
  void setTime(int, int, int);

  // get functions
  int getHour() const; 
  int getMinute() const; 
  int getSecond() const; // lab 3 define 

  // display functions
  std::string to24format() const; // lab 3 define
  std::string toAMPMformat() const;

private:

  // data members
  int hour{0};
  int minute{0};
  int second{0};

  // private helper functions
  void setHour(int);
  void setMinute(int);
  void setSecond(int); // lab 3 define
};


#endif