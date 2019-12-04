#include <string>

#ifndef CHARACTER_H
#define CHARACTER_H

class Character {

// grant friend access to Gameboard 
friend class Gameboard;
// allow overload of << operator 
friend std::ostream& operator<< (std::ostream& output, const Character& character);

public:
Character(std::string = "unknown player"); // default name 
virtual char get_ID() const;
virtual void set_start_position();
std::string get_position() const;
virtual void set_move();
std::string get_name() const;

// changed private to protected
protected:
int row{0}; 
int col{0}; // initialize to 0:0
int move_horizontal{1};
int move_vertical{1}; // initialize to 1:1
std::string name{};

};

#endif