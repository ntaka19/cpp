#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<vector>
#include<cstring>
#include<fstream>

using namespace std;

int main(){
  vector<vector<int> > a;
  
  int m = 2;
  int n = 4;
  
  a.resize(m);
  for(int i=0; i<m ;++i){
    a[i].resize(n);
  }
  //matrix m*n

  a[1][0]=1;
  a[1][1]=2;
  a[1][2]=3;
  a[1][3]=4;

  printf("%d\n",a[0][0]);  
  printf("%d\n",a[1][0]);  
}
