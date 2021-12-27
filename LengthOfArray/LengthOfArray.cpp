#include <bits/stdc++.h>
using namespace std;

int LengthOfArray(char arr[]){
  if(arr[0]=='\0'){
    return 0;
  }
  return 1+LengthOfArray(arr+1);
}

int main(){
  char myArr[] = "Oogga Bogga";
  cout << LengthOfArray(myArr);
  return 0;
};