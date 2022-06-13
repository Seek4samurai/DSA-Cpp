#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int maximumUniqueSubarray(vector<int> &nums) {
    vector<int> prev(10001, -1);
    int curr_sum = 0, max_sum = 0, l = 0;
    for (int r = 0; r < nums.size(); r++) {
      if (prev[nums[r]] >= l) {
        curr_sum -=
            accumulate(nums.begin() + l, nums.begin() + prev[nums[r]] + 1, 0);
        l = prev[nums[r]] + 1;
      }
      curr_sum += nums[r];
      prev[nums[r]] = r;
      max_sum = max(max_sum, curr_sum);
    }
    return max_sum;
  }
};

int main() {
  vector<int> vect = {4, 2, 4, 5, 6};
  Solution().maximumUniqueSubarray(vect);

  return 0;
};
