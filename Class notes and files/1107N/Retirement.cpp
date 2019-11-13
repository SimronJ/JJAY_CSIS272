#include <string>
#include "Retirement.h"

using namespace std;

Retirement::Retirement(string name, double balance, string pt)
: Account{name, balance}
{
    plantype = pt;
}

string Retirement::get_plantype( )const{
    return plantype;
}

void Retirement::set_plantype(string s){
    plantype = s;
}