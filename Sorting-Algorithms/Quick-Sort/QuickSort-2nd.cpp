#include<iostream>
using namespace std;

int partition(int arr[], int start, int end){
  int pivot = end;
  int count = start;
  for (int i=start; i<=end; i++){
    if (arr[i]<arr[pivot]){
      count++;
    };
  };
  
  int i = start;
  for (int j=start; j<=end-1; j++){
    if (arr[j]<arr[pivot]){
      swap(arr[j], arr[i]);
      i++;
    };
  };

  swap(arr[pivot], arr[count]);
  return count;
};

void quickSort(int arr[], int start, int end){
  if (start>=end){
    return;
  }
  int p = partition(arr, start, end);
  quickSort(arr, start, p-1);
  quickSort(arr, p+1, end);
};

int main(){
  int arr[] = {2,4,1,6,3,8,7,5};
  for (int i=0; i<=7; i++){
    cout << arr[i];
  };
  
  cout << endl;
  // cout << endl << partition(arr, 0, 4) << endl;
  quickSort(arr, 0, 8);

  for (int i=0; i<=7; i++){
    cout << arr[i];
  };
  return 0;
};
