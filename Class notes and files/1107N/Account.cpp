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
    transactions.push_back(depositAmount);
}

void Account::withdraw(int withdrawAmount){
  if (withdrawAmount > 0 && withdrawAmount <= balance)
    balance -= withdrawAmount;
    transactions.push_back(withdrawAmount);
}

void Account::accountInfo() const{
  //output customer name and balance
  std::cout << "\nName: " << name 
       << "\nBalance: " << balance << "\n";
}

void Account::accountStatement() const{
  //output statement heading
  std::cout << "\nACCOUNT STATEMENT\n";
  //output customer name
  std::cout << "\nName: " << name << "\n";
  //output each transaction
  for (int i = 0; i < transactions.size(); i++)
  {
    if (transactions[i] < 0)
    {
      std::cout << "Withdraw: " << -transactions[i] << "\n";
    }
    else
    {
      std::cout << "Deposite: " << transactions[i] << "\n";
    }
  }
  
  
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