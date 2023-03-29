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
	cout << endl << testing.getGud() << endl;






// Okay, so BoardTile is good.
/*
	BoardTile a("123456780"), d("206418357");

	vector<BoardTile> silly;
	silly = d.nextConfigs();

	for(int i = 0; i < silly.size(); i++){
    cout << silly[i].getConfig() << ' ' << silly[i].manhattanDistance(a) << ' ' << silly[i].GetPath();
		cout << endl;
	}


	silly = silly[0].nextConfigs();

	for(int i = 0; i < silly.size(); i++){
    cout << silly[i].getConfig() << ' ' << silly[i].manhattanDistance(a) << ' ' << silly[i].GetPath();
		cout << endl;
	}
*/


// Let's check out Sliding_Solver:
/*
  priority_queue <BoardTile, vector<BoardTile>, Compare> DoesThisWork;

  BoardTile Ideal("123456780"), a("123654807"), b("023456781"), c("123456078"), d("163425780"), e("426018357");
  // a = 7, b = 4, c = 2, d = 4, e = 13, 

  DoesThisWork.push(a);
  DoesThisWork.push(b);
  DoesThisWork.push(c);
  DoesThisWork.push(d);
  DoesThisWork.push(e);

  BoardTile temp;
  for(int i = 0; i < 5; i++){
    temp = DoesThisWork.top();
		DoesThisWork.pop();

    cout << temp.getConfig() << endl;
	}
*/









return 0;
}
