#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<cstdio>
#include<vector>
#include<cstring>
#include<fstream>
#include<random>

#define N 10

/*specification
 *
 * E contains node number in order such that:
 * E[2*i] links with E[2*i+1]
 *
 * deletion of node is basically deletion of the edges. 
*/


using namespace std;

std::random_device rd;
std::mt19937 mt(rd());
std::uniform_real_distribution<double> score(0.0,1.0);

int deleteEdge(vector<int>& Edge, int seed){
  
  //vector<int> *Edge;
  //Edge = new vector<int>(N); 
  
  //ここで関数が呼び出されるたびに変えている 
  
  //vector<int> Edge(N);
  printf("random %lf\n",score(mt)); 

  vector<int> mark(N);
  
  int delNum = 1;
  int j=0;

  /*初期化
  for(int i=0;i<N;i++){
    Edge[i] = i;
  }
  Edge[8] = 1;
  */

  printf("initial\n");  
  for (int i=0;i<Edge.size();i++){  
    printf("%d %d\n",i,Edge[i]);
  }
  
  //delete するnodeの番号の添字を保存//
  for (int i=0;i<Edge.size();i++){  
    if(Edge[i]==delNum) {
      
      mark[j]=i;
      if(i%2==0){
	mark[j+1]=i+1;	
      }
      else{
	mark[j+1]=i-1;
      }
      j+=2;
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

  /*
  printf("output\n");  
  for (int i=0;i<Edge.size();i++){  
    printf("%d %d\n",i,Edge[i]);
  }*/
  
  //mark.resize(N);
  fill(mark.begin(),mark.end(),0);
}
