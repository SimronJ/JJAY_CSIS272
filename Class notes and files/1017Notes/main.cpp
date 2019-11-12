#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <cstdlib>
#include "EMS.h"
using namespace std;

int main() {


  //181584617,6/7/2018 23:59,INJMAJ,3,44,BRONX,10462
  EMS record{"181584617","6/7/2018 23:59","INJMAJ","3","44","BRONX","10462"};

  record.printRecord();

  vector<EMS> records; // create vector to hold records

  ifstream infile("ems_juneweek.csv", ios::in);

  if(!infile){// if file not opened, exit
    cout << "could not open the file";
    exit(EXIT_FAILURE);
  }
  // otherwise, file opened
  
   string line; //string to hold each row in file
  while (getline(infile, line))
  {
    EMS newrecord{line}; // use constructor for one string
    records.push_back(newrecord); 
  }
  //use size function to get number of records in vector
  cout << "Number of records: " << records.size() << "\n";

    //print first five records
    for (int i = 0; i < 5; i++)
    {
      records[i].printRecord();
    }

    int bxcount = 0, mancount = 0, bklncount = 0, sicount = 0, qnscount = 0;
    for (int i = 0; i < records.size(); i++)
    {
      if(records[i].getBorough() == "RICHMOND / STATEN ISLAND"){
        sicount++;
      }
      else if(records[i].getBorough() == "BROOKLYN"){
        bklncount++;
      }
      else if(records[i].getBorough() == "MANHATTAN") {
        mancount++;
      }
      else if(records[i].getBorough() == "BRONX") {
        bxcount++;
      }
      else if(records[i].getBorough() == "QUEENS") {
        qnscount++;
      }
    }

    cout << "\nIncidents by Borough: \n\n";
    cout << "Brooklyn: " << bklncount
    << "\nQueens: " << qnscount
    << "\nBronx: " << bxcount
    << "\n Manhattan: " << mancount
    << "\nStaten Island: " << sicount << "\n\n"; 
    
  
}