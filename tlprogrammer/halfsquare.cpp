#include <iostream>
#include <cstdlib>
using std::cin;
using std::cout;

int halftriangle();
int sideways();

int main(void){
  halftriangle();
  sideways();
  return 0;
}

int halftriangle(){
  for(int row = 1;row <= 5;row++){
    for (int hashNum = 1; hashNum <= 6-row;hashNum++){
      cout << "#";
    }
  cout << "\n";
  }
}

int sideways(){
  for(int row = 1;row <= 7;row++){
    for (int hashNum = 1; hashNum <=4-abs(4-row);hashNum++){
      cout << "#";
    }
  cout << "\n";
  }
}
