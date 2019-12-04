#include "Gameboard.h"
#include "Character.h"
#include "Martian.h"
#include "Alien.h"
#include <iostream>
using namespace std;

int main() {
  
  Character player1{"BasePlayer"};
  cout << player1.get_name() << " -- " 
  << player1.get_ID()  << " -- " 
  << player1.get_position() << "\n"; 

  Martian player2{"Mars"}; 
  cout << player2.get_name() << " -- " 
  << player2.get_ID()  << " -- " 
  << player2.get_position() << "\n"; 

  Martian player3{"Mars"}; 
  cout << player3.get_name() << " -- " 
  << player3.get_ID()  << " -- " 
  << player3.get_position() << "\n"; 

  Alien player4{"Al"}; 
  cout << player4.get_name() << " -- " 
  << player4.get_ID()  << " -- " 
  << player4.get_position() << "\n";


  // commented out game for now until we get to polymorphism
  
  Gameboard board{"Gameboard", '_'};
  board.addPlayer(&player1);

  for (int i = 1; i <= 10; i++){
    board.update();
    board.display();
  }
  
}