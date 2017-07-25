#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<vector>
#include<cstring>
#include<fstream>
#include<map>
#include<string>

#define MAX_V 100 
using namespace std;

struct edge{int to,cap,rev;};

vector<edge> G[MAX_V];
bool used[MAX_V];

void add_edge(int from,int to, int cap){
  G[from].push_back((edge){to,cap,G[to].size()});
  G[to].push_back((edge){from,0,G[to].size()-1 });
}

int dfs(int v,int t, int f){
  if(v==t) return f;
  used[v] = true;
  for(int i = 0; i<G[v].size(); i++){
    edge &e = G[v][i];
    if(!used[e.to] && e.cap > 0){
      int d = dfs(e.to, t, min(f,e.cap));
      if(d > 0){
	e.cap -= d;
	G[e.to][e.rev].cap += d;
	return d;
      }
    }
  }
  return 0;
}

//sからtへの最大流量を求める
int max_flow(int s,int t){
  int flow = 0;
  for (;;) {
    memset(used,0,sizeof(used));
    int f = dfs(s,t,INF);
    if (f==0) return flow;
    flow += f;
  }
}


int main(){}


