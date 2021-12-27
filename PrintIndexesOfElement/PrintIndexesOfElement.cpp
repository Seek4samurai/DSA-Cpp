#include <bits/stdc++.h>
using namespace std;

void printIndexes(int arr[], int size, int ele, int i){
  if(i==size){
    return;
  }
  if(arr[i]==ele){
    cout << i << " ";
  }
  printIndexes(arr, size, ele, i+1);
};

int main(){
  int myArr[] = {1,2,3,4,3,6};
  printIndexes(myArr, 6, 3, 0);
  return 0;
};
