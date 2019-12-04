#include "Checking.h"
#include "Savings.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {

  Checking chk1{"John Doe", 1000, true};
  // Account pointer
  Account* acctPtr = &chk1;
  // Checking Pointer
  Checking* chkPtr = &chk1;

  // call function through pointers
  acctPtr->accountinfo();
  chkPtr->accountinfo();

  // create vector of Account pointers (base class)
  vector<Account*> bank;

  // create pointers to new Savings and Checking accounts 
  Checking chk2{"Sim Doe", 300, false};
  Savings sav1{"John Doe", 3000, .05};
  Savings sav2{"Jane Doe", 4000, .04};

  // add pointers to vector 
  bank.push_back(&chk1);
  bank.push_back(&chk2);
  bank.push_back(&sav1);
  bank.push_back(&sav1);

  // for each account, call accountinfo function 
  for (int i = 0; i < bank.size(); i++)
  {
    bank[i]->accountinfo();
  }
  

}