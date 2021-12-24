#include <bits/stdc++.h>
using namespace std;

int CountNum(int number){
  // Base case
  if (number == 0){
    return 0;
  };
  // Recursion & calculation
  number = CountNum(number/10)+1;
  return number;
};

int main(){
  cout << CountNum(69420);
};
