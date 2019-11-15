#include "Account.h"
#include "Checking.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<Checking *> bank;
    for (int i = 1; i <= 3; i++)
    {
        Checking *temp = new Checking{"Doe", i * 100};
        bank.push_back(temp);
    }
    for (int i = 0; i < bank.size(); i++)
    {
        cout << bank[i]->getBalance();
    }
}
