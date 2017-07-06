#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;
const int MAX = 100000;
const int mod = 1000000007;
int N;
int a[MAX];
int t[MAX];
int min(int a,int b ){
	if(a<b) return a;
	else return b;
}

int main(){
	cin>>N;
	for(int i=0;i<N;i++) cin >> t[i];
	for(int i=0;i<N;i++) cin >> a[i];

	int f,g;
	long long int ans = 1;
	for(int i =0;i<N;i++){
		if(i==0) f=0;
		else if(t[i-1] < t[i]) f=0;
		else f=1;

		if(i==N-1) g=0;
		else if(a[i] > a[i+1])g=0;
		else g = 1;

		if(f==0 && g==0){
			if(t[i] == a[i]) ans*=1;
			else ans *= 0;
		}
		else if (f==0 && g==1){
			if(t[i]<=a[i])ans*=1;
			else ans*=0;	
		}
		
		else if (f==1 && g==0){
			if(t[i] >=a[i])ans*=1;
			else ans*=0;	
		}
		else ans *= min(t[i],a[i]);
		ans%=mod;
	}
	cout << ans << endl;
	return 0;
}


