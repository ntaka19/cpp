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
  vector<vector<int> > E;
  vector<vector<int> > rE;
  
  vector<int> Edge(N);
  vector<int> mark(N);
  
  int delNum = 1;
  int j=0;

  //初期化
  for(int i=0;i<N;i++){
    Edge[i] = i;
  }
  Edge[8] = 1;
  
  printf("initial\n");  
  for (int i=0;i<Edge.size();i++){  
    printf("%d %d\n",i,Edge[i]);
  }
  
  //delete するnodeの番号の添字を保存//
  for (int i=0;i<Edge.size();i++){  
    if(Edge[i]==delNum) {
      mark[j]=i;
      j++;
    }
  } 

  mark.resize(j);
  sort(mark.rbegin(),mark.rend());
  
  printf("delete=%d mark\n",delNum);
  for (int i=0;i<mark.size();i++){
    printf("%d\n",mark[i]);
  }

  for(int i=0;i<j;i++){
    Edge.erase(Edge.begin()+mark[i]);
  }
  
  printf("output\n");  
  for (int i=0;i<Edge.size();i++){  
    printf("%d %d\n",i,Edge[i]);
  }

}
