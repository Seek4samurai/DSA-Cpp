#include <bits/stdc++.h>
using namespace std;

// Linear search Function
int linearSearch(int arr[], int size, int key){
  for (int i=0; i<=size; i++){
    if (arr[i]==key){
      return i;
    }
  }
  return -1;
}

int main(){
  int size;
  cout << "Enter size of array : ";
  cin >> size;
  int arr[size];

  for (int i=0; i<size; i++){
    cin >> arr[i];
  }

  int key;
  cout << "Search for : ";
  cin >> key;

  int position = linearSearch(arr, size, key);
  if(position==-1){
    cout << "Not found!";
  }else{
    cout << "Found at " << position;
  }
  
  return 0;
};
