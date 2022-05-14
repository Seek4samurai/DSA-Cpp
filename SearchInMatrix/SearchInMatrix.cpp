#include <bits/stdc++.h>

class Solution {
public:
  bool searchMatrix(std::vector<std::vector<int>> &matrix, int target) {
    int row = matrix.size();
    // check for empty rows
    if (row == 0)
      return false;
    int col = matrix[0].size();
    // check for empty cols
    if (col == 0)
      return false;

    // if target value is not in the matrix
    if (target < matrix[0][0] || target > matrix[row - 1][col - 1])
      return false;

    int i = 0;
    int j = col - 1;

    while (i <= row - 1 && j >= 0) {
      if (matrix[i][j] == target)
        return true;
      else if (matrix[i][j] < target)
        i++;
      else if (matrix[i][j] > target)
        j--;
    }
    return false;
  }
};

int main() { return 0; }
