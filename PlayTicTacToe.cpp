/******************************************************************************
* Elizaveta (Liza) Sokolova
* PlayTicTacToe 
* Plays a game of TicTacToe
******************************************************************************/

#include<iostream> 
#include"TicTacToe.h"

using namespace std;

int main(int argc, char* argv[]) {

  // initialize board and player & computer character values 
  TicTacToe board = TicTacToe(); 

  char player = 'X'; 
  char computer = 'O';

  // draw the inital board 
  board.printBoard(); 

  return 0; 
}