#include <vector>
#include <string>
#include "Evidence.h"

using namespace std;

#ifndef CASE_H
#define CASE_H

class Case
{
private:
    int case_id;
    vector<Evidence> inventory;
    static int next_id;

public:
    Case();
    int get_case_id();
    void add_evidence(Evidence&);
    void display_inventory();
    void print_report(string);
};


#endif