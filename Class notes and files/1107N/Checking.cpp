#include "Checking.h"

using namespace std;

Checking::Checking(string n, int bal, bool dc)
//ingializer list set debit card
//explicitly call base account constructor
: debitcard{dc}, Account{n, bal}
{

}

bool Checking::hasdebitcard() const{
    return debitcard;
}

void Checking::setservicefee(int newfee){
    if (newfee > 0)
    {
        servicefee = newfee;
    }
}

int Checking::getservicefee() const{
    return servicefee;
}