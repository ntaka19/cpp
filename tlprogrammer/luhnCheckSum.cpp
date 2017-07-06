#include <iostream>
using std::cin;
using std::cout;
/*  int digit;
  cout << "Enter a single digit number,0-9";
  cin >> digit;
  */
int doubleDigitValue(int digit){
  int doubledDigit = digit * 2;
  int sum;
  if(doubledDigit <= 10) sum = 1 +doubledDigit % 10;
  else sum = doubledDigit;
  //cout << "Sum of digits in doubled number: " << sum << "\n";
  return sum;
}
int main(){
char digit;
/*cout << "Enter a one-digit number";
digit = cin.get();
int sum = digit - '0';
cout << "Is the sum of digits " << sum << "?\n";
*/

//Checks what character is read after the last digit. 
//try 1234 as an input and you'll get 49 50 51 52 10 
//this means 10 is read as end of input
while(true){
  digit = cin.get();
  cout << int(digit) << " ";
}

}

//reduced problem     
char digit;
int checksum = 0;
int position = 1; 
cout << "Enter a single digit number,0-9";
for (int position = 1;position <= 6; position++){
  cin >> digit;
  checksum += digit - '0';
}

while(digit!=10) {
  if(position %2 == 0) checksum += digit - '0';
  else checksum += 2*(digit-'0');
  digit = cin.get();
  position ++;
}
cout << "Checksum is " << checksum << ".\n";
if(checksum % 10 == 0){
  cout << "Checksum is divisible by 10. Valid.\n";
} else {
  cout << "Check sum is not divisible by 10. Invalid \n";
}

//final program

char digit;
int oddLengthchecksum = 0;
int evenLengthchecksum = 0;

int position = 1;
cout << "Enter a number: ";
digit = cin.get();









