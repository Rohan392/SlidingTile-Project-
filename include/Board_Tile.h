#include <iostream>
#include <string>
#include <vector>

using namespace std;

class BoardTile {
public:
BoardTile(const string&);	
vector<BoardTile> nextConfigs();	
int numMoves();	
int manhattanDistance(const BoardTile& goalconfig);

private:	
string config;
string movesFromStart
};