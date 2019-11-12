#include "Saving.h"
using namespace std;

Saving::Saving(string name, int amount, double rate)
: interestrate{rate}, Account{name, amount}
{

}

double Saving::Calculateinterest(){
    return interestrate * getBalance();
}

double Saving::getinterestrate(){
    return interestrate;
}

void Saving::setinterestrate (double is){
    if (is > 0.0)
    {
        interestrate = is;
    }
    
}