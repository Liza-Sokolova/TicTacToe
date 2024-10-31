/******************************************************************************
* Elizaveta (Liza) Sokolova
* PlayTicTacToe 
* Plays a game of TicTacToe
******************************************************************************/

#include<iostream> 
#include"TicTacToe.h"

using namespace std;

// validateInput
// a helper function to validate the input, when asking for (y/n)
// input - string named input with the user input that is being validated
// output - a boolean to state if input was valid or not (false if invalid, true if valid)
bool validateInput(string input) {
  if (input.size() > 1) {
    return false; 
  } 
  if (input[0] == 'y') {
    return true; 
  } else if (input[0] == 'n') {
    return true;
  } else {
    return false; 
  }
}

int main(int argc, char* argv[]) {

  // initialize board and player & computer character values 
  TicTacToe board = TicTacToe(); 

  char player = 'X'; 
  char computer = 'O';

  // Ask for number of players: 
  bool running = true; 
  do {
    int player_num; 
    cout << "Enter number of players (1 or 2): "; 
    cin >> player_num; 
    bool valid = false; 

    switch (player_num) {
      case 1:
        // play the game with 1 player, and 1 computer 
        // draw the inital board 
        board.printBoard(); 

        board.playerMove(player);

        board.printBoard();
 
        do { 
          // after finishing game ask if they want to play again? 
          cout << "Do you want to play another game? (y/n): "; 
          string play; 
          cin >> play; 
          while (!validateInput(play)) {
            cout << "Do you want to play another game? (y/n): "; 
            cin >> play; 
          }
          if (play[0] == 'n') { 
            running = false;
          }
          board.clearBoard(); // clears board irrespective of if another game is being played or not. 
          valid = true; 
        } while (!valid); 
        
        break; 
      case 2: 
        // play the game with 2 players 
        
        // draw the inital board 
        board.printBoard(); 
        break; 
      default: 
        break;
    }

  } while (running);  

  return 0; 
}