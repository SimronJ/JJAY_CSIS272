#include "Case.h"
#include "Evidence.h"

using namespace std;

int Case::next_id{1001};

Case::Case(){
    case_id = next_id;
    next_id = next_id + 1;
}

int Case::get_case_id(){
    return case_id;
}

void Case::add_evidence(Evidence& e){
    inventory.push_back(e);
}