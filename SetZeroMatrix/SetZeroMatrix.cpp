#include <bits/stdc++.h>

class Solution {
public:
  void setZeroes(std::vector<std::vector<int>> &matrix) {
    int rowNumber = matrix.size();
    if (rowNumber == 0) {
      return;
    }
    int colNumber = matrix[0].size();
    if (colNumber == 0) {
      return;
    }

    bool hasZeroFirstRow = false;
    bool hasZeroFirstCol = false;

    // Does first row has zero?
    for (int j = 0; j < colNumber; j++) {
      if (matrix[0][j] == 0) {
        hasZeroFirstRow = true;
        break;
      }
    }
    // Does first col has zero?
    for (int j = 0; j < rowNumber; j++) {
      if (matrix[j][0] == 0) {
        hasZeroFirstCol = true;
        break;
      }
    }

    // find zero element and store information in first row and column
    for (int i = 1; i < rowNumber; i++) {
      for (int j = 1; j < colNumber; j++) {
        if (matrix[i][j] == 0) {
          matrix[i][0] = 0;
          matrix[0][j] = 0;
        }
      }
    }

    for (int i = 1; i < rowNumber; i++) {
      for (int j = 1; j < colNumber; j++) {
        if (matrix[0][j] == 0 or matrix[i][0] == 0) {
          matrix[i][j] = 0;
        }
      }
    }

    // if hasZero is true, make every element in that row or col 0
    if (hasZeroFirstRow) {
      for (int i = 0; i < colNumber; i++) {
        matrix[0][i] = 0;
      }
    }
    if (hasZeroFirstCol) {
      for (int i = 0; i < rowNumber; i++) {
        matrix[i][0] = 0;
      }
    }
  }
};

int main() { return 0; }
