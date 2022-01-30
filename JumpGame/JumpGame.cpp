#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  bool canJump(vector<int>& nums) {
    int goodIndex = nums.size()-1;

    for(int i=nums.size()-2; i>=0; i--){
      if(i+nums[i] >= goodIndex){
        goodIndex = i;
      }
    }

    if(goodIndex == 0) return true;
    else return false;
  }
};

int main(){
  vector<int> vector1 = {2,3,1,1,4};

  Solution Obj;
  cout << Obj.canJump(vector1);
  return 0;
};
