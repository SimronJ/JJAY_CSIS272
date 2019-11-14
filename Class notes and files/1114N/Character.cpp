#include "Character.h"
#include <iostream>
#include <sstream>

Character::Character(string pname )
: name{pname}
{
    set_start_postion();
    set_move();
}

char Character::get_ID() const{
    return 'X';// character display on board
}

string Character::get_name() const{
    return name;
}

string Character::get_postion() const{
    ostringstream output;
    output << row << ":" << col;
    return output.str();
}

void Character::set_start_postion(){
    row = 2;
    col = 3;
}

void Character::set_start_postion(){

}

