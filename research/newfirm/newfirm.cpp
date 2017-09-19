#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<vector>
#include<cstring>
#include<fstream>
#include<map>
#include<string>
#define MAX_V 10000 
using namespace std;


bool has_key_using_count(map<string,string> &m, string n){
  if(m.count(n)==0){
    cout << "m doesn't have " << n << "." << endl;
    return false;
  }
  else{
    cout << "m has " << n << "." << endl;
    return true;
  }

}

int main(){
  map<string, string> pastyear;
  multimap<string, string> thisyear;

  string ltext,rtext;

  ifstream pastdat;
  ifstream thisdat;
  //reading_file.open("IDedgelist.dat");
  pastdat.open("2016.dat");
  thisdat.open("2017.dat");
  

  if(pastdat.fail()){
    cerr<<"File do not exist\n";
    exit(0);
  }
  
  
  while(true){ 
    pastdat >> ltext >> rtext;
    if(pastdat.eof()) break;
    pastyear[ltext] = rtext;
    
  }



  if(thisdat.fail()){
    cerr<<"File do not exist\n";
    exit(0);
  }
  
  
  while(true){ 
    thisdat >> ltext >> rtext;
    if(thisdat.eof()) break;
    
    if(!has_key_using_count(pastyear,ltext)){
      thisyear.insert(make_pair(ltext,rtext));
    }
  }
  
/* 
  for(auto itr = pastyear.begin(); itr != pastyear.end(); ++itr) {
        std::cout << "key = " << itr->first           // キーを表示
                        << ", val = " << itr->second << "\n";    // 値を表示
  }
  */

  for(auto itr = thisyear.begin(); itr != thisyear.end(); ++itr) {
        std::cout << "key = " << itr->first << ", val = " << itr->second << "\n";    // 値を表示
  }

}
