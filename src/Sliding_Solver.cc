#include "../include/Sliding_Solver.h"

using namespace std;




int SlidingSolver::hasBeen(vector<BoardTile> &Tiles, BoardTile a) {
   int lower = 0;
   int upper = Tiles.size() - 1;
   while (lower <= upper) {
      int mid = lower + (upper - lower) / 2;
      if (a.getConfig() == (Tiles[mid].getConfig()))
         return 1;
      if (a.getConfig() > (Tiles[mid].getConfig()))
         lower = mid + 1;
      else
         upper = mid - 1;
   }
   return 0;
 
}

bool shmall(BoardTile &a, BoardTile &b){
  return (a.getConfig() < b.getConfig());
}



void SlidingSolver::makeSorted(){
  sort(previousPlaces.begin(), previousPlaces.end(), shmall);
}


string SlidingSolver::getGud(){
  return Ending.GetPath();
}

SlidingSolver::SlidingSolver(string startConfig, string endConfig){
  BoardTile a(startConfig);
	BoardTile b(endConfig);
	Ending = b;

	solvePuzzle(a);



}


void SlidingSolver::solvePuzzle (BoardTile Ans){
 while((Ending != Ans)){
	  vector<BoardTile> joy;
		joy = Ans.nextConfigs();
		for(int i = 0; i < joy.size(); i++){
      if(!hasBeen(previousPlaces, joy[i]))
			  tileQueue.push(joy[i]);
		}
		previousPlaces.push_back(Ans);
		Ans = tileQueue.top();
		tileQueue.pop();
	}
  Ending = Ans;

}



