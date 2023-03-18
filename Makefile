CC = g++

CCFLAGS= -Wall -g

SIMILAR := Similar

# Default Goal
.DEFAULT_GOAL := all

# postfix
all: $(SIMILAR) nice

# Similar trees
$(SIMILAR): $(SIMILAR).o
	$(CC) $(CCFLAGS) Cool.cpp Sliding_Solver.o Board_Tile.o

Similar.o: ./src/Sliding_Solver.cc ./src/Board_Tile.cc
	$(CC) $(CCFLAGS) -c ./src/Sliding_Solver.cc ./src/Board_Tile.cc


# rm the .o files
nice: 
	rm *.o 

clean:
	rm *.o a.out



