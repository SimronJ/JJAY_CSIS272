#include "Account.h"

#ifndef SAVINGS_H
#define SAVINGS_H

class Savings : public Account {

public:
  Savings(std::string, int, double);
  double get_interest_rate() const;
  virtual void accountinfo() const override;
  
private:
  double interest_rate{0.0};

};

#endif