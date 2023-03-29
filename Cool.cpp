#include <iostream>
#include <algorithm>
#include "./include/Sliding_Solver.h"
//#include "./include/Board_Tile.h"

using namespace std;

int main(void){
  

  string start, end;
	cout << "please give the initial configuration of the board" << endl;
	cin >> start;
	cout << endl << "please give the desired configuration" << endl;
	cin >> end;


	SlidingSolver testing(start, end);
	BoardTile Ans = testing.getGud();

  cout << "Number of moves: " << Ans.numMoves() << ". Path to get there: " << Ans.GetPath() << endl;





return 0;
}
