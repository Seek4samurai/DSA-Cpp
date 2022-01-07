#include<iostream>
using namespace std;

void mergeArrays(int x[], int y[], int arr[], int start, int end){
  int mid = (start+end)/2;
  int i = start; // Iterate over the first array ie. x[]
  int j = mid+1; // Iterate over the second array ie. y[]
  int k = start; // Iterate over the main array ie. arr[]
  while(i<=mid && j<=end){
    if(x[i]<y[j]){
      arr[k] = x[i];
      i++;
      k++;
    }else{
      arr[k] = y[j];
      j++;
      k++;
    }
  }

  // If remaining elements are there, append them to the last
  while(i<=mid){
    arr[k] = x[i];
    k++;
    i++;
  }
  while(j<=end){
    arr[k] = y[j];
    k++;
    j++;
  }
};

void mergeSort(int arr[], int start, int end){
  int mid = (start+end)/2;
  int x[99], y[99];

  // Base Case
  if (start>=end){
    return;
  }

  // Dividing the Array
  for (int i=0; i<=mid; i++){
    x[i] = arr[i];
  }
  for (int i=mid+1; i<=end; i++){
    y[i] = arr[i];
  }

  // Recursion call
  mergeSort(x, start, mid);
  mergeSort(y, mid+1, end);

  // Merging Arrays
  mergeArrays(x, y, arr, start, end);
};

int main(){
  int length;
  cout << "Enter the length of the Array : ";
  cin >> length;
  int arr[length];

  // Inputing values from user
  for (int i=0; i<length; i++){
    cin >> arr[i];
  };

  // Printing Array before Sorting
  cout << "Before Merge Sort : ";
  for (int i=0; i<length; i++){
    cout << arr[i] << " ";
  };

  // Sorting
  mergeSort(arr, 0, length);

  // Printing Array after Sorting
  cout << endl << "After Merge Sort : ";
  for (int i=0; i<length; i++){
    cout << arr[i] << " ";
  };

  return 0;
};
