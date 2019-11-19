#include "Gameboard.h"
#include <iostream>


Gameboard::Gameboard(std::string name, char fill)
:board_name{name}, fill_character{fill}
{
  clear();
}

void Gameboard::clear() {
  // fill board with default character
  for (int i = 0; i < size; i++){
    for (int j = 0; j < size; j++){
      board[i][j] = fill_character;
    }
  }  
}

void Gameboard::display() const {
  std::cout << "\n" << board_name << "\n";
  for (int i = 0; i < size; i++){
    for (int j = 0; j < size; j++){
      std::cout << board[i][j];
    }
    std::cout << std::endl;
  }
}

void Gameboard::addPlayer(Character* new_player){
  players.push_back(new_player);
  int row = new_player->row;
  int col = new_player->col;
  std::cout << "\n" << new_player->get_name() << " starts at " << new_player->get_position() << "\n" ;
  board[row][col] = new_player->get_ID();
}

void Gameboard::update() {
  for (int i = 0; i < players.size(); i++){

    // replace the player current position with fill char
    int row = players[i]->row;
    int col = players[i]->col;
    board[row][col] = fill_character;

    // find and mark the new position for the player
    row = (row + players[i]->move_vertical) % size;
    col = (col + players[i]->move_horizontal) % size;
    board[row][col] = players[i]->get_ID();
    
    // update the player position
    players[i]->row = row;
    players[i]->col = col;
    std::cout << "\n" << players[i]->get_name() << " moves to " << players[i]->get_position() << "\n"; 
  }
}
