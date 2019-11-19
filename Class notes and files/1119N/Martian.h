#include "Character.h" // inherit from this class

#ifndef MARTIAN_H
#define MARTIAN_H

class Martian: public Character
{
private:

public:    
   Martian(std::string); //take in name
   void set_start_position();
   void set_move();
   char get_ID() const;
};


#endif