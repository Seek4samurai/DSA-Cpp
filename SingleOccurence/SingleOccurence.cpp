#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
      int ans = 0;

      for (int i=0; i<nums.size(); i++){
        ans = ans^nums[i];
      }
      return ans;
    }
};

int main(){
  vector<int> vector1 = {1,3,2,1,3};

  Solution Obj;
  cout << Obj.singleNumber(vector1);
  return 0;
}
