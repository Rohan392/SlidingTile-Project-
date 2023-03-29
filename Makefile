CC = g++

CCFLAGS= -Wall -g

PROJECT := Project

# Default Goal
.DEFAULT_GOAL := all

# postfix
all: $(PROJECT) nice

# Project trees
$(PROJECT): $(PROJECT).o
	$(CC) $(CCFLAGS) Cool.cpp Sliding_Solver.o Board_Tile.o

Project.o: ./src/Sliding_Solver.cc ./src/Board_Tile.cc
	$(CC) $(CCFLAGS) -c ./src/Sliding_Solver.cc ./src/Board_Tile.cc


# rm the .o files
nice: 
	rm *.o 

clean:
	rm *.o a.out



