#include "Character.h" // inherit from this class

#ifndef ALIEN_H
#define ALIEN_H

class Alien: public Character
{
private:

public:    
   Alien(std::string); //take in name
   void set_start_position();
   void set_move();
   char get_ID() const;
};


#endif