#include <iostream> 
#include <cstdio>
#include <cstdlib>
#include <cstring> 

//ナップサック問題。再帰関数を使う。

using namespace std;

const int MAX_N = 10;
const int MAX_W = 10;
int dp[MAX_N+1][MAX_W+1];
int n,W;
int w[MAX_N],v[MAX_N];

//計算時間O(nW)
int rec(int i, int j){
  
  //すでにあったら使う
  if(dp[i][j] >= 0){
    return dp[i][j];
  }
  int res;
  if(i==n){
    res = 0;
  }
  //入らない場合
  else if(j < w[i]){
    res = rec(i+1,j);
  //入る場合、入れた場合と入れない場合の最大値を使う
  }else {
    res = max(rec(i+1,j),rec(i+1,j-w[i])+v[i]);
  }
  //dpに記録
  return dp[i][j] = res;

}

void solve(){
  memset(dp,-1,sizeof(dp));
  printf("%d\n",rec(0,W));
}

int main(void){
  cin >> n;
  for (int i=0;i<n;i++){
    cin >> w[i] >> v[i];
  }
  cin >> W; 
  solve();
}


