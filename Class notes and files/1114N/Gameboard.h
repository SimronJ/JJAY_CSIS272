#include "Character.h"
#include <vector>
#include <string>

#ifndef GAMEBOARD_H
#define GAMEBOARD_H

class Gameboard{

public:
  Gameboard(std::string = "unknown", char = '-');
  void display() const;
  void clear();
  void update();
  void addPlayer(Character*);

private:
  std::string board_name{};
  int size{10};
  char fill_character;
  char board[10][10];
  std::vector<Character*> players;
};

#endif