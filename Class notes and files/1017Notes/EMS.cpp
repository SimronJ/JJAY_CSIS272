#include <string>
#include <iostream>
#include <sstream>
#include "EMS.h"
using namespace std;

EMS(std::string ident, std::string dt, std::string type, std::string sev, std::string resp, std::string bor, std::string zip)
: id{ident}, datetime{dt}, calltype{type}, serverity{sev}, dispatchresponse_seconds{resp}, borough{bor}, zipcode{zip}
{}

EMS::EMS(string record){
    string dt;
    istringstream raw{record};
    getline(raw, id, ','); // read up to comma
    getline(raw, dt, ',');
    datetime.setTimestamp(dt); // update timestamp with string
    getline(raw, calltype, ',');
    getline(raw, serverity, ',');
    getline(raw, dispatchresponse_seconds, ',');
    getline(raw, borough, ',');
    getline(raw, zipcode);
}

void EMS::printRecord(){
    cout << id << "\n" 
    << datetime.print() << "\n"
    << calltype << "\n"
    << serverity << "\n"
    << dispatchresponse_seconds << "\n"
    << borough << "\n"
    << zipcode << "\n\n" 
}

string EMS::getBorough() const{
    return borough;
}