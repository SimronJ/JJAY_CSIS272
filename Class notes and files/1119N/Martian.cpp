#include "Martian.h"
using namespace std;

Martian::Martian(string name)
: Character{name}//send name to Character constructor
{
    set_start_position();
    set_move();
}

void Martian::set_start_position(){
    row = 1;
    col = 5;
}

void Martian::set_move(){
    move_vertical = 2;
    move_horizontal = 2;
}

char Martian::get_ID() const{
    return 'M';
}