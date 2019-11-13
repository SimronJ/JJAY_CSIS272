#include <string>
#include "Account.h"

using namespace std;

#ifndef RETIREMENT_H
#define RETIREMENT_H

class Retirement : public Account
{
private:
    string plantype;
    string state;

public:
    Retirement(string, double, string);
    string get_plantype() const;
    void set_plantype(string);
};



#endif