#include <iostream>
#include <string>
#include <vector>
#include "../include/Board_Tile.h"

// Because we rock. 
using namespace std;





BoardTile::BoardTile(const string& current){
  Moves = 0;
  config = current;
  movesFromStart = "";
};

vector<BoardTile> BoardTile::nextConfigs(){
  int position, xpos, ypos;
	position = this->config.find('0');
	vector<BoardTile> NewVecs;
  xpos = position % 3;
	ypos = position / 3;

	switch(ypos){
    case 0: {
      
		} break;
    case 1: {
      
		} break;
    case 2: {
      
		} break;
	}


  switch(xpos){
    case 0: {
      
		} break;
    case 1: {
      
		} break;
    case 2: {
      
		} break;
	}


};


int BoardTile::numMoves(){
  return Moves;
};



int BoardTile::manhattanDistance(const BoardTile& goalconfig){
  int Distance = 0, position;
	char thing;

	for(int i = 0; i < 9; i++){
    thing = goalconfig.config[i];
    position = this->config.find(thing);
		Distance += abs(i%3 - position%3);
		Distance += abs(i/3 - position/3);
	}

	return Distance;
};



