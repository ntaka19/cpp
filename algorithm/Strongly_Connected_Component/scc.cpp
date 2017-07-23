#include<iostream>
#include<cstdlib>
#include<cstdlib>
#include<vector>
#include<cstring>
#define MAX_V 10
using namespace std;


//強い連結成分分解(Strongly Connected Component
//二度のdfsで実装
//強連結成分を一つの点に潰すと、DAG(閉路を持たない有向グラフ)



int V;
vector<int> G[MAX_V]; //グラフの隣接リストを表現
vector<int> rG[MAX_V]; //辺の向きを逆にしたグラフ
vector<int> vs; //帰りがけ順の並び
bool used[MAX_V]; //すでに調べたか
int cmp[MAX_V]; //属する強連結成分のトポロジカル順序

int main(){}

void add_edge(int from,int to){
  G[from].push_back(to);
  rG[from].push_back(from);
}

void dfs(int v){
  used[v] = true;
  for(int i = 0;i < G[v].size(); i++){
    if(!used[G[v][i]]) dfs(G[v][i]);
  }
  vs.push_back(v);
}

void rdfs(int v, int k){
  used[v] = true;
  cmp[v] = k;
  for(int i=0;i<rG[v].size(); i++){
    if(!used[rG[v][i]]) rdfs(rG[v][i],k);
  }
}

int scc(){
  memset(used,0,sizeof(used));
  vs.clear();
  for(int v=0;v<V;v++){
    if(!used[v]) dfs(v);
  } 
  memset(used,0,sizeof(used));
  int k = 0;
  for(int i=vs.size()-1; i >= 0; i--){
    if(!used[vs[i]]) rdfs(vs[i],k++);
  }
  return k; //number of scc's

  //to print specific scc. specify topological order.  
}
