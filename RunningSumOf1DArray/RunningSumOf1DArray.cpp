#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<int> runningSum(vector<int> &nums) {
    int size = nums.size();

    for (int i = 1; i <= size - 1; i++) {
      nums[i] = nums[i] + nums[i - 1];
    }
    return nums;
  }
};

int main() {
  vector<int> vec = {1, 1, 1, 1, 1};
  vector<int> vec1 = {1, 2, 3, 4};
  vector<int> vec2 = {3, 1, 2, 10, 1};

  vector<int> answer = Solution().runningSum(vec);

  for (int i = 0; i < answer.size(); i++) {
    cout << answer[i] << " ";
  }
  return 0;
};
