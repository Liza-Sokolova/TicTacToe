//-----------------------------------------------------------------------------
// TicTacToe.h 
// Header file for TicTacToe ADT. 
//-----------------------------------------------------------------------------
#include <iostream> 
#include <string> 

#ifndef TicTacToe_H_INCLUDE_
#define TicTacToe_H_INCLUDE_ 

// Exported Types -------------------------------------------------------------
class TicTacToe {

private: 
  // TicTacToe fields 
  char board[9]; // a static array of type char with size 9 

public: 
  // Class Constructors & Destructors ----------------------------------------

  // TicTacToe()
  // Constructor that creates a new TicTacToe board that is empty 
  TicTacToe(); 

  // No destructor really necessary ? 

  // Access functions -------------------------------------------------------- 

  // The public doesn't really need to know what values are in the board? 

  // Manipulation procedures -------------------------------------------------

  // playerMove()
  // Adds a players move to the board 
  // input - char (player character - 'X' or 'O') 
  // output - void (changes this TicTacToe board to update with player's move)
  // Will keep asking the player for a valid number until the player gives one
  void playerMove(char player_char); 

  // clearBoard()
  // clears the status of the board back to empty 
  void clearBoard();

  // Other Functions ---------------------------------------------------------

  // printBoard()
  // prints this current TicTacToe board 
  void printBoard(); 

};


#endif 