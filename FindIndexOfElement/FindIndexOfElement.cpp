#include <bits/stdc++.h>
using namespace std;

int findFirstIndex(int arr[], int size, int ele, int i){
  if(i==size){
    return -1;
  }
  if(arr[i]==ele){
    return i;
  }
  return findFirstIndex(arr, size, ele, i+1);
};

int findLastIndex(int arr[], int size, int ele){
  if(size==-1){
    return -1;
  }
  if(arr[size]==ele){
    return size;
  }
  return findLastIndex(arr, size-1, ele);
};

int main(){
  int myArr[] = {1,2,3,4,5};
  cout << findLastIndex(myArr,5,2);
  return 0;
};
