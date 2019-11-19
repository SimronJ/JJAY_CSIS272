#include "Alien.h"
using namespace std;


Alien::Alien(string name)
: Character{name}//send name to Character constructor
{
    set_start_position();
    set_move();
}

void Alien::set_start_position(){
    row = 3;
    col = 3;
}

void Alien::set_move(){
    move_vertical = 1;
    move_horizontal = 2;
}

char Alien::get_ID() const{
    return 'A';
}