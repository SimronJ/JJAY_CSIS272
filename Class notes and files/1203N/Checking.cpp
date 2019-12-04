#include <iostream>
#include "Checking.h"

Checking::Checking(std::string n, int bal, bool dc)
: Account{n, bal}, debitcard{dc}
{}

bool Checking::hasdebitcard() const{
  return debitcard;
}

void Checking::accountinfo() const {
  std::cout << getName() << "\n$" << getBalance() << "\n";
  if (hasdebitcard())
    std::cout << "Debit\n\n";
  else 
    std::cout << "No Debit\n\n";
}