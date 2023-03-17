CC = g++

CFLAGS = -g -Wall


TARGET = project
QUESTIONH = include/Board_Tile
QUESTIONSRC = src/Board_Tile
QUESTION2H = include/Sliding_Solver
QUESTION2SRC = src/Sliding_Solver

all: $(TARGET)


$(TARGET): $(QUESTION).o 
		$(CC) $(CFLAGS) -o $(TARGET) $(QUESTION).o  $(QUESTION2).o

$(QUESTION).o: $(QUESTIONSRC).cc $(QUESTIONH).h
		$(CC) $(CFLAGS) -c $(QUESTIONSRC).cc 
		
$(QUESTION2).o: $(QUESTION2SRC).cc $(QUESTION2H).h
		$(CC) $(CFLAGS) -c $(QUESTION2SRC).cc 
		
clean:
		
	$(RM) -f $(TARGET) $(QUESTION).o $(QUESTION2).o

