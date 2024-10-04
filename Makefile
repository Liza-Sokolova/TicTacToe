#------------------------------------------------------------------------------
# Makefile for a TicTacToe project 
# Elizaveta (Liza) Sololova
# make                  makes PlayTicTacToe
# make TicTacToeTest    makes TicTacToeTest
# make clean            removes binary files
# make check            runs valgrind on main 
#------------------------------------------------------------------------------

MAIN           = PlayTicTacToe
ADT1           = TicTacToe
SOURCE         = $(MAIN).cpp
OBJECT         = $(MAIN).o
ADT1_TEST      = $(ADT1)Test
ADT1_SOURCE    = $(ADT1).cpp
ADT1_OBJECT    = $(ADT1).o
ADT1_HEADER    = $(ADT1).h
COMPILE        = g++ -std=c++17 -Wall -c
LINK           = g++ -std=c++17 -Wall -o
REMOVE         = rm -f
MEMCHECK       = valgrind --leak-check=full

$(MAIN): $(OBJECT) $(ADT1_OBJECT) 
	$(LINK) $(MAIN) $(OBJECT) $(ADT1_OBJECT)

$(ADT1_TEST): $(ADT1_TEST).o $(ADT1_OBJECT) 
	$(LINK) $(ADT1_TEST) $(ADT1_TEST).o $(ADT1_OBJECT)

$(OBJECT): $(SOURCE) $(ADT1_HEADER) 
	$(COMPILE) $(SOURCE)

$(ADT1_TEST).o: $(ADT1_TEST).cpp $(ADT1_HEADER) 
	$(COMPILE) $(ADT1_TEST).cpp

$(ADT1_OBJECT): $(ADT1_SOURCE) $(ADT1_HEADER)
	$(COMPILE) $(ADT1_SOURCE)

clean: 
	$(REMOVE) $(MAIN) $(ADT1_TEST) 
	$(REMOVE) $(OBJECT) $(ADT1_TEST).o $(ADT1_OBJECT)


