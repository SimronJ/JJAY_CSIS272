#include <string>
#include "Timestamp.h"

#ifndef EMS_H
#define EMS_H

class EMS{

public:

    EMS(std::string, std::string, std::string, std::string, std::string, std::string, std::string); //take in single row
    EMS(std::string);// take in single row
    EMS(){}// default constructor

    void printRecord() const; //print record

    void getBorough() const;

private:
    std::string id;
    Timestamp datetime;
    std::string calltype;
    std::string serverity;
    std::string dispatchresponse_seconds;
    std::string borough;
    std::string zipcode;
};


#endif