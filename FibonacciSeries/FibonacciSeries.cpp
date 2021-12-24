#include <bits/stdc++.h>
using namespace std;

int fibonacci(int number){
  /// Base case
  if (number == 0){
    return 0;
  }
  if (number == 1){
    return 1;
  }
  // Recursive case
  int smallOutput1 = fibonacci(number-1);
  int smallOutput2 = fibonacci(number-2);

  // Calculation
  return smallOutput1 + smallOutput2;
};

int main(){
  cout << fibonacci(4);
  return 0;
};
