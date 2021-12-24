#include <bits/stdc++.h>
using namespace std;

void PrintNumAsc(int number){
  // Base case
  if (number == -1){
    return;
  };
  // Recursion
  PrintNumAsc(number-1);
  // Calculation
  cout << number;
  return;
};

int PrintNumDesc(int number){
  // Base case
  if (number == 0){
    return number;
  };
  cout << number;
  // Recursion & Calculation
  number = PrintNumDesc(number-1);
  return number;
};

int main(){
  cout << PrintNumDesc(5) << endl;
  PrintNumAsc(5);
  return 0;
};
