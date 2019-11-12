#include <iostream>
#include <sstream>
#include "Time.h"
using namespace std;

void displayTime(const string & message, const Time * time){
  cout << message << "\n24 Hour clock: " << time->to24format() << "\nAM/PM format: " << time->toAMPMformat() << "\n\n";
}

int main() {
  
  Time time1;
  Time time2{11};
  Time time3{22, 30};
  Time time4{7, 45, 30};

  displayTime("Time 1", &time1);
  displayTime("Time 2", &time2);
  displayTime("Time 3", &time3);
  displayTime("Time 4", &time4);

  string rawinput;
  cout << "Enter time h:m:s";
  getline(cin, rawinput);
  istringstream inputTime{rawinput};
  int hour, minute, second;
  char c;
  inputTime >> hour >> c >> minute >> c >> second;
  
  Time newTime{hour, minute, second};
  displayTime("New time", &newTime);

  // lab 3 addition of constructor taking string 
  Time newStringTime{"05:30:15"}; // use new constructor
  displayTime("New string time", &newStringTime);

}