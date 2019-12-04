#include <string>
#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {

public: 
  Account(std::string, int);
  int getBalance() const;
  std::string getName() const;
  virtual void accountinfo() const;
  
private: 
  int balance{0};
  std::string name;
};

#endif