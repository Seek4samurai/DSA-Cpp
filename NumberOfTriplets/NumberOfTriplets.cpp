#include <bits/stdc++.h>
using namespace std;

int countTriplets(int arr[], int size, int product) {
  int count = 0;
  int prod = 1;
  for (int i = 0; i < size - 2; i++) {
    for (int j = i + 1; j < size - 1; j++) {
      for (int k = j + 1; k < size; k++) {
        prod = arr[i] * arr[j] * arr[k];
        if (prod == product) {
          count++;
        }
      }
    }
  }
  return count;
};

int main() {
  int Arr[] = {1, 2, 3, 6, 1, 6, 3, 2, 1};
  int N = 9; // length of array
  int product = 6;
  cout << endl << "Number of triplets : " << countTriplets(Arr, N, product);
  return 0;
};
