#include <iostream>
#include <cmath>
using namespace std;

//defin function MaxMagnitude(); parameters 3 integers; returns largest integer
int MaxMagnitude(int val1, int val2, int val3){
  
  if(abs(val1) > abs(val2) && abs(val1) > abs(val3)){
    return val1;
  }
  else if(abs(val2) > abs(val1) && abs(val2) > abs(val3)){
    return val2;
  }
  else{
    return val3;
  }
}

int main(){
  int num1, num2, num3;
  //read in 3 integers
  cin >> num1 >> num2 >> num3;
  //call MaxMagnitude() function
  //output the largest integer
  cout << MaxMagnitude(num1, num2, num3) << endl;
  return 0;
}