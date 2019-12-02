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

  Evidence item{ts1, agent};
  item.check_out("Jane Doe");
  item.check_in();
  item.check_out("Joe Doe");
  item.display_custody_chain();

  Evidence item2{ts1, agent};
  item2.check_out("Jane Doe");
  item2.check_in();
  item2.display_custody_chain();

  Case c2;
  c2.add_evidence(item);
  c2.add_evidence(item2);
  c2.display_inventory();

  
}
 