#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<vector>
#include<cstring>
#include<fstream>
#include<map>
#include<string>

#define MAX_V 100 
#define INF 10000

using namespace std;

//行き先、容量、逆辺
struct edge{int to,cap,rev;};
vector<edge> G[MAX_V];
bool used[MAX_V];

void add_edge(int from,int to,int cap);
int dfs(int v,int t, int f);
int max_flow(int s,int t);

int main(){
  add_edge(0,1,10);
  add_edge(1,2,6);
  add_edge(2,4,5);
  add_edge(1,3,6);
  add_edge(3,4,8);
  add_edge(3,2,3);
  add_edge(0,2,2);

  printf("max flow = %d\n",max_flow(0,4));
}


//fromからとtoへ向かう容量capの辺をグラフに追加する
void add_edge(int from,int to, int cap){
  G[from].push_back((edge){to,cap,G[to].size()});
  G[to].push_back((edge){from,0,G[from].size()-1 });
}
//増加パスを見つけるとき、順方向と逆方向は区別しない。
//区別する点はcapacity


//増加パスをdfsで探す
int dfs(int v,int t, int f){
  if(v==t) return f; //一番末端までたどりついた場合。流量を返す。
  used[v] = true;
  
  for(int i = 0; i<G[v].size(); i++){
    edge &e = G[v][i];
    
    if(!used[e.to] && e.cap > 0){
      //流せるflowは毎回今のflowとcapacity 
      int d = dfs(e.to, t, min(f,e.cap));
      
      if(d > 0){
	//ここで順方向のcapは流した分減らす。
	//逆方向は流した分capを追加する。(その分再度逆(順方向)に流すことが可能だから)
	e.cap -= d; //capを直接変更する。
	//revはここで使われる
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
  return flow;
}

