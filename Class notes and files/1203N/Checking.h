#include "Account.h"
#ifndef CHECKING_H
#define CHECKING_H

class Checking : public Account {

public:
  Checking(std::string, int, bool);
  bool hasdebitcard() const;
  virtual void accountinfo() const override;

private: 
  bool debitcard;

};

#endif 