#include <iostream>
using std::cin;
using std::cout;

//a program that reads 10 integers from the user. 
//after all the numbers have been entered, the user may ask to display the count of positive numbers or teh negative numbers. 
//
int main(void){
  int number;
  int positiveCount = 0;
  int negativeCount = 0;
  for (int i = 1; i<=10;i++){
    cin >> number;
    if(number > 0) positiveCount++;
    if(number > 0) negativeCount++;
  }
  char response;
  cout << "Do you want the (p)ositve or (n)egative count?";
  cin >> response;
  if(response == 'p') 
    cout << "Positive count is " << positiveCount << "\n";
  if(response == 'n') 
    cout << "Negative count is " << negativeCount << "\n";
}
