#include<iostream>
#include<map>
#include<string>
#include<algorithm>
#include<cstdio>
using namespace std;

int main(void){
  char S[] = "ABCDE";
  int a = 0;
  putchar(S[a++]);
  putchar(S[a]);
  putchar('\n');
  int N = 6;
  sort(S,S+N);
  printf(S[%d],N); 
}
