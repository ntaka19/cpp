#include <iostream> 
#include <cstdio>
#include <cstdlib>
#include <cstring> 
using namespace std;


const int MAX_N = 10;
const int MAX_W = 10;
int dp[MAX_N+1][MAX_W+1];
int n,W;
int w[MAX_N],v[MAX_N];

//DP bottom up
//dp[n][j] = 0
//dp[i][j] 
//= dp[i+1][j] (j<w[i])
//= max(dp[i+1][j],dp[i+1][j-w[i]+v[i]) (それ以外)
/*
 *
 入力：
 4 (n)
 2 3 (w,v)
 1 2
 3 4
 2 2
 5
 7 (W)
出力：
 7 (0,1,3番目の品物を選ぶ)
 *
 */



void solve(){
  for(int i = n-1;i>=0; i--){
    for (int j= 0; j<= W; j++){
      if(j<w[i]){
	dp[i][j] = dp[i+1][j];
      }else {
	dp[i][j] = max(dp[i+1][j],dp[i+1][j-w[i]]+v[i]);
      }
    }
  }
  printf("%d\n",dp[0][W]);
}


int main(void){
  cin >> n;
  for (int i=0;i<n;i++){
    cin >> w[i] >> v[i];
    //cin >> v[i];
  }
  cin >> W; 
  solve();
}


