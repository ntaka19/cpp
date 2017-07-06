#include<iostream>
#include<algorithm>
#include<stdio.h>
#define MAX_N 10
//least common sequence 


int main(){
  using namespace std;

  int n;
  int m;
  char s[MAX_N];
  char t[MAX_N];
  
  int dp[MAX_N+1][MAX_N+1];

  for(int i=0;i<n;i++){
    for(int j=0;j<0;j++){
      if(s[i]==t[i]){
	dp[i+1][j+1] = dp[i][j] + 1;
      }
      else{
	dp[i+1][j+1] = max(dp[i][j+1],dp[i+1][j]);
      }
    }
  }
  printf("%d\n",dp[n][m]);  
}
