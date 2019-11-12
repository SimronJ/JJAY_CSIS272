#include <iostream>
#include "Timestamp.h"
#include "Evidence.h"
#include  "Case.h"
using namespace std;

int main() {

  Date day1{8,4,2019};
  Time time1{15, 30};
  Timestamp ts1{day1, time1};
  string agent{"John Doe"};

  // test code for Evidence class
  // uncomment to test your 
  // implementation of the functions
  
  Evidence item1{ts1, agent};
  cout << item1;
  item1.check_out("Jane Doe");
  cout << item1;
  item1.check_in();
  cout << item1;
  item1.check_out("Joe Doe");
  cout << item1;
  item1.check_in();
  cout << item1;

  Case c1, c2;
  c1.add_evidence(item1);
  cout << "1st Case ID:" << c1.get_case_id() << "\n"
       << "2nd Case ID:" << c2.get_case_id() << "\n"
       << endl;
  
}
 