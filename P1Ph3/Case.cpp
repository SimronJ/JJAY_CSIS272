#include "Case.h"
#include "Evidence.h"



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
    std::string s = std::to_string(get_case_id());
     std::cout << "Evidence in inventory for case " << get_case_id() << '\n' << '\n';
    for (auto &i : inventory ) {
        std::cout << i << '\n';
    }
}