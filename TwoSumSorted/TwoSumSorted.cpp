#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<int> twoSum(vector<int> &numbers, int target) {
    int start = 0;
    int end = numbers.size() - 1;

    while (start < end) {
      int sum = numbers[start] + numbers[end];

      if (sum == target) {
        vector<int> answer{start + 1, end + 1};
        return answer;
      }

      if (sum < target) {
        start++;
        continue;
      } else {
        end--;
        continue;
      };
    }

    return numbers;
  }
};

int main() {
  vector<int> nums = {1, 2, 3, 4, 4, 9, 56, 90};
  vector<int> answer = Solution().twoSum(nums, 8);

  for (int i = 0; i <= answer.size() - 1; i++) {
    cout << answer[i] << " ";
  }

  return 0;
};
