#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<int> data(10,2);
  vector<int> data22(1);
  
  data[0] = 1; //[]を使ったランダムアクセス
  //b = a;
  for (int i = 0; i<10; i++){
    cout << data[i]<<endl;
  }
  //cout << b[1];
}
