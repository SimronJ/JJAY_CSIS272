#include <string>

using namespace std;

#ifndef CHARACTER_H
#define CHARACTER_H

class Character
{

friend class Gameboard;
friend ostream& operator << (ostream&, const Character&);

private:
    string name;
    //postion board
    int row{0};
    int col{0};
    //how they move on board
    int move_vertical{0};
    int move_horizontal{0};

public:
    Character(string = "unknown player");
    char get_ID() const;
    string get_name() const;
    string get_position() const;
    void set_start_position(); // where they begin on board
    void set_move();// how they move on the baord in turn

    ~Character();
};


#endif