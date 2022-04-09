#include <bits/stdc++.h>
using namespace std;

// Two pointer approach
class Solution {
public:
  vector<int> findPermutation(const string str, int n) {
    vector<int> ans(n);
    int start = 1, end = n;

    for (int i = 0; i < str.size(); i++) {
      if (str[i] == 'D') {
        ans[i] = end;
        end--;
      } else {
        ans[i] = start;
        start++;
      }
    }
    // One element is always left at the end of loop
    ans[n - 1] = start;
    return ans;
  }
};

int main() {
  Solution myObj;

  vector<int> answer = myObj.findPermutation("DIDD", 5);
  for (int i = 0; i < answer.size(); i++) {
    cout << answer[i] << " ";
  }
  return 0;
}