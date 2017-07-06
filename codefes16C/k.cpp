#include <iostream>

using namespace std;

int main(){
	int K,T;
	int max=0;
	cin >> K >> T; 
	int cakes[K];
	for (int i=0; i<T ;i++){
	cin >> cakes[i];
	}
	for (int i=0; i<T ;i++){
	if(cakes[i]>max){max = cakes[i];}
	}
	int ans;
	ans = 2*max- K- 1 ;
	if (ans>=0){cout << ans <<endl;}
	else {cout << 0 << endl;}

}
