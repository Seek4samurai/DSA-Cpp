#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
  int jump(vector<int>& nums) {
    int size = nums.size();
    if(size==1) return 0;
    if(nums[0]==0) return -1;

    int ladder = nums[0];
    int stair = nums[0];
    int jump = 1;

    for(int i=1; i<size; i++){
      if(i==size-1) return jump;

      if(i+nums[i]>ladder){
        ladder = i + nums[i];
      }
      
      stair--;

      if(stair==0){
        jump++;
        if(i>=ladder) return -1;
        stair = ladder - i;
      }
    }
    return -1;
  }
};

int main(){
  Solution Obj;
  vector<int> vector1 = {1,1,1,1,1};

  cout << Obj.jump(vector1);

  return 0;
}