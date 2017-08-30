#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<vector>
#include<cstring>
#include<fstream>
#include<random>

#define N 1000000
int main(){
  int *E;
  //E = (int *)calloc(N,sizeof(int));
  E = new int[N](); //behaves like calloc.value initialization
  

  struct test{
    int x;
    int y;
  }; 

  struct test *tt;
  tt = new test[N]();
  

  printf("%d\n",E[0]);
  printf("%d\n",tt[0].x);
  delete[] tt;
  delete[] E;
}
