#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<vector<int>> transpose(vector<vector<int>> &matrix) {
    int m = matrix.size();    // rows
    int n = matrix[0].size(); // cols

    // Transposing the matrix
    if (m == n) {
      for (int row = 0; row < m; row++) {
        for (int col = row; col < n; col++) {
          swap(matrix[row][col], matrix[col][row]);
        }
      }
      return matrix;
    } else {
      vector<vector<int>> res(n, vector<int>(m));

      for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
          res[i][j] = matrix[j][i];
        }
      }
      return res;
    }
  }
};

int main() {
  vector<vector<int>> vec = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  vector<vector<int>> vec1 = {{1, 2, 3}, {4, 5, 6}};
  vector<vector<int>> vec2 = {{1, 2}, {4, 5}, {7, 8}};

  vector<vector<int>> answer = Solution().transpose(vec1);

  for (int i = 0; i < answer.size(); i++) {
    for (int j = 0; j < answer[i].size(); j++) {
      cout << answer[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
};
