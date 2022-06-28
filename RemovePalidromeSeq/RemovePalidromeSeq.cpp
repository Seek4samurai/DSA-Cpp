#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int isPalindrome(string str) {
    int start = 0;
    int end = str.length() - 1;

    while (start < end) {
      if (str[start] != str[end]) {
        return false;
      }
      start++;
      end--;
    }
    return true;
  };

  int removePalindromeSub(string s) {
    int start = 0;
    int end = s.length() - 1;

    if (s.length() == 0) {
      return 0;
    }

    if (isPalindrome(s)) {
      return 1;
    }
    return 2;
  }
};

int main() {
  string str = "baba";
  string str1 = "ababa";
  string str2 = "abb";

  cout << "=" << Solution().removePalindromeSub(str);
  cout << "=" << Solution().removePalindromeSub(str1);
  cout << "=" << Solution().removePalindromeSub(str2);

  return 0;
};
