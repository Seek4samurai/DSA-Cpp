#include <bits/stdc++.h>

class Solution {
public:
  std::vector<int> spiralOrder(std::vector<std::vector<int>> &matrix) {
    // answer vector
    std::vector<int> answer;

    // matrix size
    int rowSize = matrix.size();
    int colSize = matrix[0].size();

    // if matrix is empty
    if (rowSize == 0) {
      return answer;
    }
    if (colSize == 0) {
      return answer;
    }
    // ------------------

    int startRow = 0, endRow = rowSize - 1, startCol = 0, endCol = colSize - 1;
    int count = 0; // to keep track of how many variables have been pushed in
                   // anwser vector
    while (startRow <= endRow && startCol <= endCol) {
      // printing rows
      for (int i = startCol; i <= endCol; i++) {
        answer.push_back(matrix[startRow][i]);
        count++; // keeping track of values inputed in answer vector
      }
      startRow++; // incrementing and proceeding towards inner row

      // checking the final condition
      if (count == rowSize * colSize) {
        return answer;
      }

      // printing end Column
      for (int i = startRow; i <= endRow; i++) {
        answer.push_back(matrix[i][endCol]);
        count++;
      }
      endCol--; // decrementing and proceeding towards inner column

      // checking the final condition
      if (count == rowSize * colSize) {
        return answer;
      }

      // printing end row
      for (int i = endCol; i >= startCol; i--) {
        answer.push_back(matrix[endRow][i]);
        count++;
      }
      endRow--; // decrementing and proceeding towards inner row

      // checking the final condition
      if (count == rowSize * colSize) {
        return answer;
      }

      // printing from down to up column
      for (int i = endRow; i >= startRow; i--) {
        answer.push_back(matrix[i][startCol]);
        count++;
      }
      startCol++;

      // checking the final condition
      if (count == rowSize * colSize) {
        return answer;
      }
    }
    return answer;
  }
};

int main() {
  std::vector<std::vector<int>> vect{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  Solution Obj;
  std::vector<int> answer = Obj.spiralOrder(vect);

  for (int i = 0; i < vect.size(); i++) {
    for (int j = 0; j < vect[i].size(); j++) {
      std::cout << vect[i][j] << " ";
    }
    std::cout << std::endl;
  }

  for (int i = 0; i < answer.size(); i++) {
    std::cout << answer[i] << " ";
  }

  return 0;
}
