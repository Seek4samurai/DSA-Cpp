#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int minDistance(string word1, string word2) {
    int n = word1.length();
    int m = word2.length();

    int dp[2][m + 1];

    for (int i = 0; i <= n; i++) {
      for (int j = 0; j <= m; j++) {
        // base conditions
        if (i == 0 or j == 0)
          dp[i % 2][j] = 0;
        else if (word1[i - 1] == word2[j - 1])
          dp[i % 2][j] = 1 + dp[(i - 1) % 2][j - 1];
        else
          dp[i % 2][j] = max(dp[(i - 1) % 2][j], dp[i % 2][j - 1]);
      }
    }

    return n + m - 2 * dp[n % 2][m];
  }
};
