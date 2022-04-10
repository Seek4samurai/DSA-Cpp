#include <bits/stdc++.h>
using namespace std;

// Two pointer approach
class Solution {
public:
  void rotate(vector<vector<int>> &matrix) {
    int m = matrix.size();
    int n = matrix[0].size();

    // Transposing the matrix
    for (int row = 0; row < m; row++) {
      for (int col = row; col < n; col++) {
        swap(matrix[row][col], matrix[col][row]);
      }
    }

    // Reversing each row
    for (int row = 0; row < m; row++) {
      int start = 0;
      int end = n - 1;
      while (start < end) {
        swap(matrix[row][start], matrix[row][end]);
        start++;
        end--;
      }
    }
  }
};

int main() {
  Solution myObj;

  vector<vector<int>> myVector = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  for (int i = 0; i < myVector.size(); i++) {
    for (int j = 0; j < myVector[i].size(); j++)
      cout << myVector[i][j] << " ";
    cout << endl;
  }

  myObj.rotate(myVector);

  cout << endl;

  for (int i = 0; i < myVector.size(); i++) {
    for (int j = 0; j < myVector[i].size(); j++)
      cout << myVector[i][j] << " ";
    cout << endl;
  }
  return 0;
};