#include<iostream>
using namespace std;

int majorityEle(int arr[], int size){
  int candidate = arr[0];
  int count=1;
  for(int i=0; i<=size; i++){
    if (arr[i]==candidate){
      count++;
    }else{
      count--;
      if (count==0){
        candidate=arr[i];
        count=1;
      }
    }
  };
  int countOuts = 0;
  for(int i=0; i<size;i++){
    if(arr[i]==candidate){
      countOuts++;
    }
  };

  if(countOuts > size/2) return candidate;
  else return -1;
};

int main(){
  int arr[] = {1,2,1,1,2};
  cout << majorityEle(arr, 5);

  return 0;
};
