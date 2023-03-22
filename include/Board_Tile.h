#include <iostream>
#include <string>
#include <vector>

using namespace std;

class BoardTile {
  public:
	  // Standard Constructor.
    BoardTile(const string&);
		// Returns a list of possible next board positions.
    vector<BoardTile> nextConfigs();	
		// Returns the number of moves taken to get to the current position.
		int numMoves();	
		// Returns the minimum number of moves to end in the ideal position.
    int manhattanDistance(const BoardTile& goalconfig);
		// returns the path you took from start. 
		string GetPath();
		// returns the current configuration for comparision.
		string getConfig() {return config;}


  protected:
	  // Allows the number of moves taken to get to the current position
		// to be set in numMoves. May be altered to reside in constructor.
    void setNumMoves(int);
		// Ditto for the moves from start function. 
    void setMovesFromStart(string);
private:	
    int Moves;
    string config;
    string movesFromStart;
};


bool operator < (BoardTile& l, BoardTile& r);
bool operator > (BoardTile& l, BoardTile& r);
bool operator <= (BoardTile& l, BoardTile& r);

