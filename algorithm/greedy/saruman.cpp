#include <cstdio>
#include <algorithm>
#include <iostream> 
using namespace std;

const int MAX_N=10;
int N,R,X[MAX_N];

/*
int N = 6;
int R = 10;
int X[MAX_N] = {1,7,15,20,30,50};
*/
void solve();

int main(void){
  cin >> N;
  cin >> R;
  for(int i=0; i<N ;i++) cin >> X[i]; 
  
  solve();
}

void solve(){
  sort(X,X+N); //昇順
  int i = 0 , ans = 0;
  while (i<N){
    //sはカバーされていない一番左の点の位置
    int s = X[i++];
    //sは距離Rを超える点まで進む
    while (i<N && X[i] <= s + R) i++;
    //pは新しく印をつける点の位置
    int p = X[i-1];
    //pから距離Rを超える点まで進む
    while(i<N && X[i] <= p+R) i++;

    ans ++;
    
  }
  printf("%d\n",ans);
}
