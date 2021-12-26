#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int size){
  if(size == 1 || size == 0){
    return true;
  }
  if(arr[0] > arr[1]){
    return false;
  }
  // Recursion
  bool sortedArr = isSorted(arr+1, size-1);
  return sortedArr;
};

int main(){
  int a[] = {1,2,3,4,5,6,7,8,9,0};
  isSorted(a,10)? cout << true : cout << false;
  return 0;
};
