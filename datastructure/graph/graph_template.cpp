#include<iostream>
#include<vector>
#define MAX_V 10;

/////辺に属性がある場合/////
/////eg. 重み付きグラフ/////

vector<int> G[MAX_V];

struct edge {int to,cost;};
vector<edge> G[MAX_V];

int main(){
  int V,E;
  scanf("%d %d", &V,&E);
  for (int i=0; i<E; i++){
    //sからtへの辺を張る
    int s,t;
    scanf("%d %d",&s, &t);
    G[s].push_back(t);
    //無向グラフの場合はさらにtにsへの辺を張る
    //G[t].push_back(s);
  }
  /*
   * グラフの操作
   */
  return 0;
}


/////頂点に属性が有る場合/////

struct vertex{
  vector<vertex*> edge;
  /*
   *頂点の属性
   */
}

vertex G[MAX_V];

int main(){
  int V,E;
  scanf("%d %d", &s,&t);
  
  for(int i=0;i<E;i++){
    G[s].edge.push_back(&G[t]);
    //G[t].edge.push_back(&G[s]);
    
  }

  /*
   *グラフの操作
   */
}


