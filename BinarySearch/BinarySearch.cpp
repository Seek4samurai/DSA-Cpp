#include <bits/stdc++.h>
using namespace std;

// Binary search Function
int binarySearch(int arr[], int size, int key){
  int start = 0, end = size-1;
  while (start<=end){
    /*We calculate middle index like this so as to avoid integer overflow,
    which will lead to segmentation fault*/
    int mid = start + (end-start)/2;  
    if(arr[mid]==key){
      return mid;
    }else if (arr[mid]>key)
    {
      end = mid-1;
    }else{
      start=mid+1;
    }
  }
  return -1;
}

int main(){
  int size;
  cout << "Enter size of the sorted array : ";
  cin >> size;
  int arr[size];

  for (int i=0; i<size; i++){
    cin >> arr[i];
  }

  int key;
  cout << "Search for : ";
  cin >> key;

  // Array must be sorted to use binary search
  // sort(arr, arr+size); 

  int position = binarySearch(arr, size, key);
  if(position==-1){
    cout << "Not found!";
  }else{
    cout << "Found at " << position;
  }
  
  return 0;
};
