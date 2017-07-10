#include<iostream>
#include<vector>
#define MAX_V 10

//二部グラフ判定
//無向グラフに対して、
//隣接している頂点同士が違う色になるように塗る。
//２色で濡れるか判定する。

using namespace std;

int main(){
  vector<int> G[MAX_V];

  int color[MAX_V]; //頂点iの色-1or1

  bool dfs(int v,){
    color[v] = c; //頂点vをcで塗る
    for(int i = 0; i < G[v].size() ;i++){
      //隣接している頂点が同じ色なら-cで塗る
      if(color[G[v][i]] == c) return false;
      //隣接している頂点がまだ塗られていないなら-cで塗る
      if(color[G[v][i]] == 0 && !dfs(G[v][i]), -c) return false;
    }
    //全ての頂点が塗られたらtrue
    return true;
  }

  void solve(){
    for(int i = 0; i < V; i++){
      if(color[i] == 0){
	//まだ頂点iが塗られていなければ、1で塗る
	if(!dfs(i,1)){
	  printf("No\n");
	  return;
	}
      }
    }
    printf("Yes\n");
  }

}
