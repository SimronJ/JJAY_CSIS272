#include "Account.h"

#ifndef CHECKING_H
#define CHECKING_H

class Checking: public Account
{

private:
    int servicefee;
    bool debitcard;

public:
   Checking(std::string, int, bool = false);
   Checking(){}
   bool hasdebitcard() const;
   void setservicefee(int);
   int getservicefee() const;
};

#endif