#include<iostream>
using namespace std;

void bubbleSort(int arr[], int size){
  for (int count=1; count<=size-1; count++){
    for (int j=0; j<=size-2; j++){
      if (arr[j]>arr[j+1]){
        swap(arr[j], arr[j+1]);
      }
    }
  }
};

int main(){
  int n;
  cout << "Enter size of Array : ";
  cin >> n;
  int arr[n];

  for (int i=0; i<n; i++){
    cin >> arr[i];
  }

  bubbleSort(arr, n);

  for (int i=0; i<n; i++){
    cout << arr[i] << " ";
  }
  return 0;
};
