#include <bits/stdc++.h>
using namespace std;

int Product(int a, int b){
  // Base case
  if (b==0){
    return 0;
  }
  // Recursion & Calculation
  a = Product(a, b-1)+a;
  return a;
};

int main(){
  cout << Product(2,5);
};
