#include "Case.h"
#include "Evidence.h"
#include <iostream>
#include <fstream>


int Case::next_id{1001};

Case::Case(){
    case_id = next_id;
    next_id = next_id + 1;
}

//getter for case id method 
int Case::get_case_id(){
    return case_id;
}

void Case::add_evidence(Evidence& e){
    inventory.push_back(e);
}

void Case::display_inventory(){
     std::cout << "Evidence in inventory for case " << get_case_id() << '\n' << '\n';
    for (auto &i : inventory ) {
        std::cout << i << '\n';
    }
}

void Case::print_report(string chain){
    
    ofstream outputfile("report.txt", ios::out | ios::trunc);

    if (outputfile.is_open())
    {
        //printig the case id to the text file
        outputfile << "Case ID: " << get_case_id() << '\n' << '\n';
        //printig the inventory report to the text file
        for (auto &i : inventory ) {
            outputfile << i << endl;
        }
        //printig the custody chain to the text file
        outputfile << chain;

        outputfile.close();
    }
    else
    {
        std::cout << "Couldn't open the file!" << '\n'; 
    }
    
}