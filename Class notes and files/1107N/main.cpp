#include "Account.h"
#include "Checking.h"
#include <iostream>
using namespace std;

int main() {

    Checking check1{"John Doe", 500, true};

    //call inherited function
    check1.deposit(1000);

    //call derivced function
    check1.setservicefee(10);

    cout << "Balance: " << check1.getBalance() << "\n";

    Checking check2{"Jane Doe", 1000};
    cout << boolalpha;// return true/false instead of 0 and 1
    cout << check1.hasdebitcard() << "\n";
    cout << check2.hasdebitcard() << "\n";
}
