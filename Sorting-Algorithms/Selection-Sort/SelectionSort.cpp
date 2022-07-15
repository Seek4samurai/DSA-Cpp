#include <iostream>
using namespace std;

void selectionSort(int arr[], int size) {
  for (int i = 0; i <= size - 2; i++) {
    int smallest = i;
    for (int j = i + 1; j <= size - 1; j++) {
      if (arr[j] < arr[smallest]) {
        smallest = j;
      }
      swap(arr[i], arr[smallest]);
    }
  }
};

int main() {
  int size = 5;
  int arr[] = {4, 2, 5, 3, 1};

  selectionSort(arr, size);

  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  return 0;
};
