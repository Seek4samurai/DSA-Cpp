#include <bits/stdc++.h>
using namespace std;

int countWays(int input){
  if(input==1 || input==0){
    return 1;
  }
  if(input<0){
    return 0;
  }
  return countWays(input-1) + countWays(input-2) + countWays(input-3);
};

int main(){
  cout << countWays(4);
  return 0;
};
