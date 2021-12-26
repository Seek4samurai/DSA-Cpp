#include <bits/stdc++.h>
using namespace std;

bool isPresent(int arr[], int size, int ele){
  if(size == 0){
    return false;
  }
  if(arr[0]==ele){
    return true;
  }
  return isPresent(arr+1, size-1, ele);
};

bool isPresent2(int arr[], int size, int ele, int i){
  if(i==size){
    return false;
  }
  if(arr[i]==ele){
    return true;
  }
  return isPresent2(arr, size, ele, i+1);
};

int main(){
  int array[] = {1,2,3,4,5,6,7};
  isPresent2(array, 7, 3, 0)? cout << "true" : cout << "false";
  return 0;
};
