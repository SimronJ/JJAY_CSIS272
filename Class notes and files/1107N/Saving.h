#include "Account.h"

#ifndef SAVING_H
#define SAVING_H

class Saving : public Account
{
private:
    double interestrate;

public:
   Saving(std::string, int, double);
   double Calculateinterest();
   double getinterestrate();
   void setinterestrate(double);
};


#endif