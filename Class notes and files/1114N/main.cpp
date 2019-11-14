#include "Gameboard.h"
//#include "Character.h"
#include <iostream>

int main() {
  
  // some functions commented out until 
  // character class built
  Gameboard board{"Gameboard", '_'};
  //Character player1{"Player1"};
  //board.addPlayer(&player1);
  board.display();

  for (int i = 1; i <= 10; i++){
    //board.update();
    board.display();
  }
}