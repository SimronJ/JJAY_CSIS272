#include "Account.h"

Account::Account(std::string accountName, int startingBalance) 
: name{accountName}
{ 
  if (startingBalance > 0)
    balance = startingBalance;
}

void Account::deposit(int depositAmount){
  if (depositAmount > 0)
    balance += depositAmount;
}

void Account::withdraw(int withdrawAmount){
  if (withdrawAmount > 0 && withdrawAmount <= balance)
    balance -= withdrawAmount;
}

int Account::getBalance() const {
  return balance;
}

void Account::setName(std::string n){
  name = n;
}

std::string Account::getName() const{
  return name;
}