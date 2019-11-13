#include <iostream>
#include <string>
#include <vector>

#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {

public: 
  Account(std::string, int);
  Account(){};
  void deposit(int);
  void withdraw(int);
  int getBalance() const;
  void setName(std::string);
  std::string getName() const;
  void accountInfo() const;
  void accountStatement() const;

protected:
  std::vector<int> transactions;
  
private: 
  int balance{0};
  std::string name;

};

#endif