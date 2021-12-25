#include <bits/stdc++.h>
using namespace std;

int CountZeroes(int number){
  // Base case
  if (number == 0){
    return 0;
  }
  // Recursion 
  int answer = CountZeroes(number/10);
  // Calculation
  int last = number%10;
  if (last==0){
    return 1+answer;
  }
  else{
    return answer;
  }
};

int main(){
  cout << CountZeroes(1300);
};
