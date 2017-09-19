#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<vector>
#include<cstring>
#include<fstream>
#include<map>
#include<string>
#include<cmath>

#define MAX_V 10000 
using namespace std;

struct Coordinate{
    double longtitude; //経度
    double latitude; //緯度
};

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

double deg2rad (double degrees) {
    return degrees * 4.0 * atan (1.0) / 180.0;
}
//reference:
//http://yamadarake.jp/trdi/report000001.html
double Hubeny(Coordinate first, Coordinate second){
  double a = 6377397.155;
  double b = 6356079.000; 

  double dx = deg2rad(first.longtitude - second.longtitude); 
  double dy = deg2rad(first.latitude - second.latitude);

  double my = deg2rad((first.latitude+second.latitude)/2);
  double e2 = (a*a-b*b)/(a*a);
  double Mnum = a*(1-e2);
  double W = pow(1-e2*pow(sin(my),2),0.5);

  double M = Mnum/pow(W,3);
  double N = a/W;
  double d = pow(pow(dy*M,2) + pow(dx*N*cos(my),2),0.5);
  
  return d;
}


void newfirm(string prevfile, string currfile, map<string,Coordinate> &geodat ){
  map<string, string> pastyear;
  map<string, string> pastyearR;
  double dist; 
  
  multimap<string, string> thisyear;
  string ltext,rtext;

  ifstream pastdat;
  ifstream thisdat;
  
  pastdat.open(prevfile);
  thisdat.open(currfile);

  //orevious data
  if(pastdat.fail()){
    cerr<<"File do not exist\n";
    exit(0);
  }
  
  while(true){ 
    pastdat >> ltext >> rtext;
    if(pastdat.eof()) break;
    pastyear[ltext] = rtext;
    pastyearR[rtext] = ltext;
  }

  //thisyear data. 
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

    if(has_key_using_count(pastyear,ltext) && !has_key_using_count(pastyearR,rtext) ){
      thisyear.insert(make_pair(ltext,rtext));
    }
  }
  

  //新しく入ったコードに
  for(auto itr = thisyear.begin(); itr != thisyear.end(); ++itr) {
        std::cout << "key = " << itr->first << ", val = " << itr->second << "\n";    // 値を表示
  }


  for(auto itr = thisyear.begin(); itr != thisyear.end(); ++itr) {
      
      dist = Hubeny(geodat[itr->first], geodat[itr->second]);

      cout << dist << endl;

  }

}

int main(){
  string prevfile;
  string currfile;
  string CD;
  
  double longt,latit;

  /*
  struct Coordinate{
    double longtitude;
    double latitude;
  };*/

 //CDと緯度経度のマップ
  map<string, Coordinate> geodat;

  ifstream cd2geo; 
  cd2geo.open("geo.dat");

  if(cd2geo.fail()){
    cerr<<"File do not exist\n";
    exit(0);
  }
  
  while(true){ 
    cd2geo >> CD >> latit >> longt;
    if(cd2geo.eof()) break;
    
    Coordinate a; 
    a.longtitude = longt;
    a.latitude = latit; 

    geodat[CD] = a; 

  }



  prevfile="2016.dat";
  currfile="2017.dat";
  newfirm(prevfile,currfile,geodat);
}
