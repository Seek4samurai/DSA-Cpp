#include <bits/stdc++.h>
using namespace std;

int SumOfDigits(int number){
  // Base case
  if (number==0){
    return 0;
  };
  // Recursion & Calculation
  number = SumOfDigits(number/10)+(number%10);
  return number;
};

int main(){
  cout << SumOfDigits(69420);
};
