#include <iostream>
#include <string>
#include <vector>
#include "../include/Board_Tile.h"

// Because we rock. 
using namespace std;
BoardTile::BoardTile(){
  Moves = 0;
  config = "000000000";
  movesFromStart = "";
};


BoardTile::BoardTile(const string& current){
  Moves = 0;
  config = current;
  movesFromStart = "";
};

// Note: this will create in order: ULRD
// TBH, we should probably just use pointers here. This feels gross.
// Also, I want rohan to take a look at this and make it nicer. ugh.
vector<BoardTile> BoardTile::nextConfigs(){
  int position;
	position = this->config.find('0');
	vector<BoardTile> NewVecs;

	string NextOrder = this->config;
	switch(position){
    case 0: {
      // Lawful Good.
	    NextOrder = this->config;
			NextOrder[0] = NextOrder[1]; NextOrder[1] = '0';
      BoardTile a(NextOrder);
			a.setNumMoves(this->numMoves() + 1);
			a.setMovesFromStart(this->GetPath() + "R");
			NewVecs.push_back(a);

			
	    NextOrder = this->config;
			NextOrder[0] = NextOrder[3]; NextOrder[3] = '0';
      BoardTile b(NextOrder);
			b.setNumMoves(this->numMoves() + 1);
			b.setMovesFromStart(this->GetPath() + "D");
			NewVecs.push_back(b);
		} break;
    case 1: {
      // Neutral Good.
	    NextOrder = this->config;
			NextOrder[1] = NextOrder[0]; NextOrder[0] = '0';
      BoardTile a(NextOrder);
			a.setNumMoves(this->numMoves() + 1);
			a.setMovesFromStart(this->GetPath() + "L");
			NewVecs.push_back(a);
			
	    NextOrder = this->config;
			NextOrder[1] = NextOrder[2]; NextOrder[2] = '0';
      BoardTile b(NextOrder);
			b.setNumMoves(this->numMoves() + 1);
			b.setMovesFromStart(this->GetPath() + "R");
			NewVecs.push_back(b);
		
      NextOrder = this->config;
			NextOrder[1] = NextOrder[4]; NextOrder[4] = '0';
      BoardTile c(NextOrder);
			c.setNumMoves(this->numMoves() + 1);
			c.setMovesFromStart(this->GetPath() + "D");
			NewVecs.push_back(c);

		} break;
    case 2: {
      // Chaotic Good.
	    NextOrder = this->config;
			NextOrder[2] = NextOrder[1]; NextOrder[1] = '0';
      BoardTile a(NextOrder);
			a.setNumMoves(this->numMoves() + 1);
			a.setMovesFromStart(this->GetPath() + "L");
			NewVecs.push_back(a);
		
      NextOrder = this->config;
			NextOrder[2] = NextOrder[5]; NextOrder[5] = '0';
      BoardTile b(NextOrder);
			b.setNumMoves(this->numMoves() + 1);
			b.setMovesFromStart(this->GetPath() + "D");
			NewVecs.push_back(b);


		} break;
    case 3: {
      // Lawful Neutral. 
	    NextOrder = this->config;
			NextOrder[3] = NextOrder[0]; NextOrder[0] = '0';
      BoardTile a(NextOrder);
			a.setNumMoves(this->numMoves() + 1);
			a.setMovesFromStart(this->GetPath() + "U");
			NewVecs.push_back(a);
		
      NextOrder = this->config;
			NextOrder[3] = NextOrder[4]; NextOrder[4] = '0';
      BoardTile b(NextOrder);
			b.setNumMoves(this->numMoves() + 1);
			b.setMovesFromStart(this->GetPath() + "R");
			NewVecs.push_back(b);
		
      NextOrder = this->config;
			NextOrder[3] = NextOrder[6]; NextOrder[6] = '0';
      BoardTile c(NextOrder);
			c.setNumMoves(this->numMoves() + 1);
			c.setMovesFromStart(this->GetPath() + "D");
			NewVecs.push_back(c);

		} break;
    case 4: {
      // True Neutral.
	    NextOrder = this->config;
			NextOrder[4] = NextOrder[1]; NextOrder[1] = '0';
      BoardTile a(NextOrder);
			a.setNumMoves(this->numMoves() + 1);
			a.setMovesFromStart(this->GetPath() + "U");
			NewVecs.push_back(a);
		
      NextOrder = this->config;
			NextOrder[4] = NextOrder[3]; NextOrder[3] = '0';
      BoardTile b(NextOrder);
			b.setNumMoves(this->numMoves() + 1);
			b.setMovesFromStart(this->GetPath() + "L");
			NewVecs.push_back(b);
		
      NextOrder = this->config;
			NextOrder[4] = NextOrder[5]; NextOrder[5] = '0';
      BoardTile c(NextOrder);
			c.setNumMoves(this->numMoves() + 1);
			c.setMovesFromStart(this->GetPath() + "R");
			NewVecs.push_back(c);
				
      NextOrder = this->config;
			NextOrder[4] = NextOrder[7]; NextOrder[7] = '0';
      BoardTile d(NextOrder);
			d.setNumMoves(this->numMoves() + 1);
			d.setMovesFromStart(this->GetPath() + "D");
			NewVecs.push_back(d);

		} break;
    case 5: {
      // Chaotic Neutral. 
	    NextOrder = this->config;
			NextOrder[5] = NextOrder[2]; NextOrder[2] = '0';
      BoardTile a(NextOrder);
			a.setNumMoves(this->numMoves() + 1);
			a.setMovesFromStart(this->GetPath() + "U");
			NewVecs.push_back(a);
		
      NextOrder = this->config;
			NextOrder[5] = NextOrder[4]; NextOrder[4] = '0';
      BoardTile b(NextOrder);
			b.setNumMoves(this->numMoves() + 1);
			b.setMovesFromStart(this->GetPath() + "L");
			NewVecs.push_back(b);
		
      NextOrder = this->config;
			NextOrder[5] = NextOrder[8]; NextOrder[8] = '0';
      BoardTile c(NextOrder);
			c.setNumMoves(this->numMoves() + 1);
			c.setMovesFromStart(this->GetPath() + "D");
			NewVecs.push_back(c);
	
		} break;
    case 6: {
      // Lawful Evil.
	    NextOrder = this->config;
			NextOrder[6] = NextOrder[3]; NextOrder[3] = '0';
      BoardTile a(NextOrder);
			a.setNumMoves(this->numMoves() + 1);
			a.setMovesFromStart(this->GetPath() + "U");
			NewVecs.push_back(a);
		
      NextOrder = this->config;
			NextOrder[6] = NextOrder[7]; NextOrder[7] = '0';
      BoardTile b(NextOrder);
			b.setNumMoves(this->numMoves() + 1);
			b.setMovesFromStart(this->GetPath() + "R");
			NewVecs.push_back(b);

			} break;
    case 7: {
      // Neutral Evil.
	    NextOrder = this->config;
			NextOrder[7] = NextOrder[4]; NextOrder[4] = '0';
      BoardTile a(NextOrder);
			a.setNumMoves(this->numMoves() + 1);
			a.setMovesFromStart(this->GetPath() + "U");
			NewVecs.push_back(a);
		
      NextOrder = this->config;
			NextOrder[7] = NextOrder[6]; NextOrder[6] = '0';
      BoardTile b(NextOrder);
			b.setNumMoves(this->numMoves() + 1);
			b.setMovesFromStart(this->GetPath() + "L");
			NewVecs.push_back(b);
		
      NextOrder = this->config;
			NextOrder[7] = NextOrder[8]; NextOrder[8] = '0';
      BoardTile c(NextOrder);
			c.setNumMoves(this->numMoves() + 1);
			c.setMovesFromStart(this->GetPath() + "R");
			NewVecs.push_back(c);
	
		} break;
    case 8: {
      // Choatic Evil.
	    NextOrder = this->config;
			NextOrder[8] = NextOrder[5]; NextOrder[5] = '0';
      BoardTile a(NextOrder);
			a.setNumMoves(this->numMoves() + 1);
			a.setMovesFromStart(this->GetPath() + "U");
			NewVecs.push_back(a);
		
      NextOrder = this->config;
			NextOrder[8] = NextOrder[7]; NextOrder[7] = '0';
      BoardTile b(NextOrder);
			b.setNumMoves(this->numMoves() + 1);
			b.setMovesFromStart(this->GetPath() + "L");
			NewVecs.push_back(b);
		
		} break;

  }
	return NewVecs;

};



int BoardTile::numMoves(){
  return Moves;
};



int BoardTile::manhattanDistance(const BoardTile& goalconfig){
  int Distance = 0, position;
	char thing;

	for(int i = 0; i < 9; i++){
    thing = goalconfig.config[i];
		  if(thing == '0')
			  continue;
    position = this->config.find(thing);
		Distance += abs(i%3 - position%3);
		Distance += abs(i/3 - position/3);
	}

	return Distance;
};


string BoardTile::GetPath(){
  return movesFromStart;
}

void BoardTile::setNumMoves(int i){
  Moves = i;
}

void BoardTile::setMovesFromStart(string i){
  movesFromStart = i;
}

bool operator == (BoardTile& l, BoardTile& r){
  return (l.getConfig() == r.getConfig());
}

