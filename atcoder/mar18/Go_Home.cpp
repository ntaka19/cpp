#include <iostream>
#include <string> 
#include <math.h>
using namespace std;
long int memo[100000000+1];

int main(){
  long int a;
  cin >> a;
  double b = -0.5+ 0.5*sqrt((1+8*a));
  cout << ceil(b); 
   
}

