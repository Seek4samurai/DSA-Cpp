#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
    nums1.resize(m);

    for (int i = 0; i < n; i++) {
      nums1.push_back(nums2[i]);
    };

    sort(nums1.begin(), nums1.end());
  }
};

int main() {
  vector<int> vector_1 = {1, 2, 3, 0, 0, 0};
  vector<int> vector_2 = {2, 5, 6};

  Solution().merge(vector_1, 3, vector_2, 3);

  for (int i = 0; i < vector_1.size(); i++) {
    cout << vector_1[i] << " ";
  }

  return 0;
};
