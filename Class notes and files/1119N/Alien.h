#include "Character.h" // inherit from this class

#ifndef ALIEN_H
#define ALIEN_H

class Alien: public Character
{
private:

public:    
   Alien(std::string); //take in name
   virtual void set_start_position() override;
   virtual void set_move() override;
   virtual char get_ID() const override;
};


#endif