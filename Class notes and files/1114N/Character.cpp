#include "Character.h"
#include <iostream>
#include <sstream>

Character::Character(string pname )
: name{pname}
{
    set_start_position();
    set_move();
}

char Character::get_ID() const{
    return 'X';// character display on board
}

string Character::get_name() const{
    return name;
}

string Character::get_position() const{
    ostringstream output;
    output << row << ":" << col;
    return output.str();
}

void Character::set_start_position(){
    row = 2;
    col = 3;
}

void Character::set_start_position(){
    move_vertical = 1;
    move_horizontal = 1;
}

ostream& operator << (ostream& output, const Character& player){
    output << player.get_ID();// cout x or other character
    return output;
}
