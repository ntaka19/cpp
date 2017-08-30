#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<cstdio>
#include<vector>
#include<cstring>
#include<fstream>
#include "deleteEdge.h"
#define N 10

int main(){

  vector<int> Edge(N);
  
  for(int i=0;i<N;i++){
    Edge[i] = i;
  }
  Edge[8] = 1;

  
  deleteEdge(Edge);
  
  printf("output\n");  
  for (int i=0;i<Edge.size();i++){  
    printf("%d %d\n",i,Edge[i]);
  }
}
