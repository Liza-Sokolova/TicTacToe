//-----------------------------------------------------------------------------
// TicTacToe.h 
// Header file for TicTacToe ADT. 
//-----------------------------------------------------------------------------
#include <iostream> 
#include <string> 
#include "TicTacToe.h"
using namespace std; 

// Class Constructors & Destructors ----------------------------------------

// TicTacToe()
// Constructor that creates a new TicTacToe board that is empty 
TicTacToe::TicTacToe() {
  board[0] = ' ';
  board[1] = ' '; 
  board[2] = ' '; 
  board[3] = ' '; 
  board[4] = ' '; 
  board[5] = ' ';
  board[6] = ' '; 
  board[7] = ' '; 
  board[8] = ' ';
  //  = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}; 
} 

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

// Other Functions ---------------------------------------------------------

// printBoard()
// prints this current TicTacToe board 
void TicTacToe::printBoard() {
  string basic_empty = "   |   |   "; 
  string basic_end = "___|___|___"; 
  cout << basic_empty << endl; 
  cout << " " << board[0] << " | " << board[1] << " | " << board[2] << " " << endl; 
  cout << basic_end << endl; 
  cout << basic_empty << endl;  
  cout << " " << board[3] << " | " << board[4] << " | " << board[5] << " " << endl;
  cout << basic_end << endl; 
  cout << basic_empty << endl;  
  cout << " " << board[6] << " | " << board[7] << " | " << board[8] << " " << endl; 
  cout << basic_empty << endl;  
}