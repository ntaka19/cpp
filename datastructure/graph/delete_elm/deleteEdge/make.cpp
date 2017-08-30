#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<cstdio>
#include<vector>
#include<cstring>
#include<fstream>
#include<random>

#define N 10
using namespace std;
int main(){
 
  struct Node{
    int x;
    int y;
  };

  vector<Node> dd;
  for(int i=0;i<100;i++){
    
    Node newnode{i,i};
    dd.push_back(newnode);
  }

 Node t; 
  t = dd[(int)dd.size()-1]; 
  printf("%d\n",t.x);
/*
  for(int i=0;i<dd.size();i++){
    printf("%d\n",dd[i].x);
  }*/
}
