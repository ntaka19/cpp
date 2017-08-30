#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<cstdio>
#include<vector>
#include<cstring>
#include<fstream>
//#include"dSFMT.h"

#include<random>
#include "deleteEdge.h"
#define N 10

using namespace std;

int main(){

 //on random numbers 
  std::random_device rd;
  //control variable(seed)
  int seed=1;

  //std::mt19937 mt(rd());
  std::mt19937 mt(seed);
  std::uniform_real_distribution<double> score(0.0,1.0);
  //printf("score %lf\n",score(mt)); 
  //printf("score %lf\n",score(mt)); 
  

  vector<int> Edge(N);
  
  for(int i=0;i<N;i++){
    Edge[i] = i;
  }
  Edge[8] = 1;
    
  deleteEdge(Edge,seed);
  //seed = rd();
  deleteEdge(Edge,seed);
  //seed = rd();
  deleteEdge(Edge,seed);
  
  printf("output\n");  
  for (int i=0;i<Edge.size();i++){  
    printf("%d %d\n",i,Edge[i]);
  }
}
