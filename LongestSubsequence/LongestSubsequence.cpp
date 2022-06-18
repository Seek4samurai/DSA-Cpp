#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int lengthOfLIS(vector<int> &nums) {
    int count = 0;
    int size = nums.size();

    if (size == 0)
      return 0;

    if (size == 1)
      return 1;

    for (int i = 0; i <= size; i++) {
      if (nums[i] < nums[i + 1]) {
        count++;
      }
    }
    return count;
  }
};

int main() {
  vector<int> vec = {10, 9, 2, 5, 3, 7, 101, 18};

  int answer = Solution().lengthOfLIS(vec);
  cout << answer;
  return 0;
};
