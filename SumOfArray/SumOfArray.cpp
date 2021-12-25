#include <bits/stdc++.h>
using namespace std;

int SumOfArray1(int arr[], int size){
  // Base case
  if(size == 0){
    return 0;
  }
  return arr[0] + SumOfArray1(arr+1, size-1);
};

int SumOfArray2(int arr[], int size){
  // Base case
  if(size == 0){
    return 0;
  }
  return arr[size-1] + SumOfArray2(arr, size-1);
};

int SumOfArray3(int arr[], int size, int i){
  // Base case
  if(i == size){
    return 0;
  }
  return arr[i] + SumOfArray3(arr, size, i+1);
};

int main(){
  int a[] = {1,2,3,4};
  cout << SumOfArray3(a,4,0);
  return 0;
};
