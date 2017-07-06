#include<iostream>
#include<map>
#include<string>
#include<algorithm>
#include<cstdio>

//貪欲法
//区間スケジューリング
//S:Start time, T:End Time
//幾つ仕事を入れられるか

using namespace std;
const int MAX_N = 100000;
//int N,S[MAX_N], T[MAX_N];
pair<int,int> itv[MAX_N];

  
void solve();
int main(void){solve();}

int S[] = {1,2,4,6,8};
int T[] = {3,5,7,9,10};
int N = 5; //number of input


void solve(){
  for (int i=0; i<N;i++){
    itv[i].first = T[i];
    itv[i].second = S[i];
  }
  sort(itv,itv+N);

  int ans = 0, t =0;
  for(int i = 0; i<N;i++){
    if(t<itv[i].second) {
      ans ++;
      t = itv[i].first;
    }
  }
printf("%d\n",ans); 
}

