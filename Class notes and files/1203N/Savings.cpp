#include <iostream>
#include "Savings.h"

Savings::Savings(std::string n, int bal, double rate)
: Account(n, bal) 
{
  if (rate >= 0 && rate <= .15)
    interest_rate = rate;
}

double Savings::get_interest_rate() const{
  return interest_rate;
}

void Savings::accountinfo() const {
  std::cout << getName() << 
  "\n$" << getBalance() << 
  "\nRate: " << interest_rate << "\n\n";
}