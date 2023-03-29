#include <iostream>
#include <algorithm>
#include <string>
#include <bits/stdc++.h>
#include "../include/Board_Tile.h"
using namespace std;


class Compare
{
public:
    bool operator() (BoardTile l , BoardTile r )
    {
  	  BoardTile Ideal("123456780");
    	  return ((l.numMoves() + l.manhattanDistance(Ideal)) > (r.numMoves() + r.manhattanDistance(Ideal)));
    }
};




class SlidingSolver {
public:
	SlidingSolver();
	SlidingSolver(string startConfig, string endConfig);
	string getGud();
	

  //bool shmall(BoardTile &a, BoardTile &b);
	BoardTile Ending;
  vector<BoardTile> previousPlaces;
  priority_queue <BoardTile, vector<BoardTile>, Compare> tileQueue;
  void makeSorted();
  int hasBeen(vector<BoardTile> &Tiles, BoardTile a);
  void solvePuzzle(BoardTile);
};

