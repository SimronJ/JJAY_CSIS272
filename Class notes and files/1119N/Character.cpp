#include "Character.h"
#include <iostream>
#include <sstream>

Character::Character(std::string player)
:name{player}
{
  set_start_position(); // set where the player enters the board
  set_move(); // set how the player will move around the board 
}

void Character::set_start_position()
{
  row = 1;
  col = 2;
}

void Character::set_move()
{
  move_vertical = 2;
  move_horizontal = 1;
}

std::string Character::get_position() const 
{
  std::ostringstream output;
  output << row << ":" << col;
  return output.str(); // return row:col format 
}

std::string Character::get_name() const 
{
  return name; 
}

char Character::get_ID() const {
  return 'X'; // identifier for this character type 
}

std::ostream& operator<< (std::ostream& output, const Character& player)
{
  output << player.get_ID();
  return output;
}