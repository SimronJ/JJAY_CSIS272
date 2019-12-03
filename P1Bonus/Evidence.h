#include <string>
#include <iostream>
#include <vector>
#include "Timestamp.h"

#ifndef EVIDENCE_H
#define EVIDENCE_H

class Evidence{

friend std::ostream& operator<< (std::ostream&, Evidence&);

public:
  Evidence(){} // default constructor already defined

  Evidence(Timestamp, std::string);
  void check_out(std::string);
  void check_in();
  void display_custody_chain();
  std::string print_CC();

private:
  Timestamp collected_ts;
  std::string current_agent{};
  std::vector<std::string> custody_chain;

};


#endif