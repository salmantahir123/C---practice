#include <iostream>
using namespace std;
int main() {
  bool ships[4][4] = {
    {0,1,0,0},
    {0,0,0,1},
    {0,0,0,0},
    {1,1,0,0}
  };
  int hits = 0;
  int numberOfTurns = 0;
  
  while(hits < 4) {
  int row,column;
  
  cout << "selecting coordinates\n";
  cout << "Enter row number between 0 and 3:";
  cin >> row ;
  cout << "Enter column number between 0 and 3:";
  cin >> column;
   if(ships[row][column]) {
      ships[row][column] = 0;
      hits++;
      cout << "hit! "<< hits << "left\n\n";}
      else {
      cout << "miss!\n\n";
   }
   numberOfTurns++;
}
cout << "win! you took " << numberOfTurns << "truns\n";
return 0;  
}
