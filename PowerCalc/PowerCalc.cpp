#include <bits/stdc++.h>
using namespace std;

int Power(int x, int n){
  // Base case
  if (n==1){
    return 1;
  };
  // Recursion
  int smallOutput = Power(x, n-1);
  // Calculation
  return x*smallOutput;
};

int main(){
  cout << Power(2,8);
  return 0;
}
