#include <iostream>
#include <string> 

using namespace std;

int main(){
  long int w,a,b,ans;
  cin >> w >> a >> b;
  
  if(a+w < b){
    ans = b-(a+w);
    cout << ans << endl;
  }
  else if ((a<=b && b<=a+w) ||(a<=b+w && b+w<=a+w)){
    cout << 0 << endl;
  }
  else {
    ans = a-(b+w);
    cout << ans << endl;
  }
}
