#include <iostream>
#include <string>

using namespace std;

int main(){
	string str; 
	cin >> str;

	int k =0;
	int l =0;

	for (int i=0;i<=str.size();i++){
	if (str[l] == 'C'){
		k = l; 
		for (int j=l; j<=str.size(); j++){
			if (str[k] == 'F') {
				cout <<"Yes\n";
			 	return 0;}
			else {k++;}
		}
	}
		else {l++;}
	}
	cout << "No\n";
	
}
