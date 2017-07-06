#include <iostream>
 using namespace std;

 int count(string str,char a){
	 int num = 0;
 	for (i=0;i<str.size();i++){
		if ('a' == str[i]) {num+=1;}
	} 
 
 }

 int main(){
	 int H ,W;
	 string str;
	 int max = 0;
	 int row[a];
	 cin >> H >> W;
	 cin >>str;
	
	
	 for (j=0;j<W){
	 row[j] = count(str,str[j]);	
 	}
	 
	 for (j=0;j<W){
	 if(max< row[j]){max = row[j];}	 
 	}
 }
