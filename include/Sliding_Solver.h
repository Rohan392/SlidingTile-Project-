#include <iostream>
#include <algorithm>
#include <string>
#include <bits/stdc++.h>
#include "../include/Board_Tile.h"
using namespace std;

// Comparitor class for the queue. 
class Compare
{
public:
    bool operator() (BoardTile l , BoardTile r )
    {
  	  BoardTile Ideal("123456780");
    	  return ((l.numMoves() + l.manhattanDistance(Ideal)) > (r.numMoves() + r.manhattanDistance(Ideal)));
    }
};



// Class to implement A*.
class SlidingSolver {
public:
  // The Constructor. 
  // All private functions are called (indirectly or directly) in the constructor. 
	SlidingSolver(string startConfig, string endConfig);
  // Returns the final BoardTile.
	BoardTile getGud();


private:
  // The correct BoardTile Object. 
  BoardTile Ending;
  // A vector of BoardTiles which have been visited. 
  vector<BoardTile> previousPlaces;
  // A priority queue of board tiles.
  // Ordered by min(manhattanDistance + numMoves) of each board. 
  priority_queue <BoardTile, vector<BoardTile>, Compare> tileQueue;
  // A function that sorts previousPlaces so binary search can be used. 
  void makeSorted();
  // A function that uses binary search to check if a position has been visited. 
  int hasBeen(vector<BoardTile> &Tiles, BoardTile a);
  // A function that implements the man part of the A* algorithms.
  // Uses above functions. 
  void solvePuzzle(BoardTile);
};

