#include "Time.h"
#include "Date.h"

#ifndef TIMESTAMP_H
#define TIMESTAMP_H

class Timestamp {

friend std::ostream& operator<< (std::ostream&, Timestamp);

public:
  Timestamp(Date, Time);
  Timestamp(std::string);
  Timestamp(){} // default

  void setTimestamp(std::string);
  std::string print() const;

  bool operator == (const Timestamp&);
  bool operator != (const Timestamp&);

private:
  Date date{};
  Time timeofday{};

};


#endif 