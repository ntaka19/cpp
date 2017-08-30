#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<cstdio>
#include<vector>
#include<cstring>
#include<fstream>
#define N 10

using namespace std;

int main(){
  int a;

  vector<int> changesize(N);  
  
  changesize.resize(4);
  changesize.resize(15);
  
  changesize[15]=1; 
  printf("%d\n",changesize[15]);
}
