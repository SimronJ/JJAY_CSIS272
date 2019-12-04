#include "Character.h" // inherit from this class

#ifndef MARTIAN_H
#define MARTIAN_H

class Martian: public Character
{
private:

public:    
   Martian(std::string); //take in name
  virtual void set_start_position() override;
  virtual void set_move() override;
  virtual char get_ID() const override;
};


#endif