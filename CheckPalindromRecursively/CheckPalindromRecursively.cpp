#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int arr[], int start, int end){
  if(start > end){
    return true;
  }
  if(arr[start] == arr[end]){
    return isPalindrome(arr, start+1, end-1);
  } else {
    return false;
  }
};

int main(){
  int myArr[] = {1,2,2,1};
  isPalindrome(myArr, 0, 4) ? cout << "True" : cout << "False";
  return 0;
};
