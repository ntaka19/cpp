#include<iostream>
#include<map>
#include<string>
#include<algorithm>
#include<cstdio>

const int MAX_N = 100000;
int N = 6;
char S[MAX_N+1]="ACDBCB";

void solve();

int main(void){
  solve();
  }


void solve(){
  int a = 0, b = N-1;

  while(a<=b){
    bool left =false;
    for(int i=0;a+i<=b;i++){
      if(S[a+i]<S[b-i]){
      left = true;
      break;
    }
    else if (S[a+i] > S[b-1]){
      left = false;
      break;
      }
    }
    if(left) putchar(S[a++]);
    else putchar (S[b--]);
  }
  putchar('\n');
}


