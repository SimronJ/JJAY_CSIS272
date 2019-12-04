#include <iostream>
#include "Account.h"

Account::Account(std::string n, int bal) 
: name{n}  
{ 
  if (bal > 0) 
    balance = bal;
}

int Account::getBalance() const {
  return balance;
}

std::string Account::getName() const{
  return name;
}

void Account::accountinfo() const {
  std::cout << name << "\n$" << balance << "\n\n";
}