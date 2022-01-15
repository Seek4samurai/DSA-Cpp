#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int Sqrt(int x){
      if(x == 0) return 0;

      int start = 1;
      int end = x;
      int ans;
      while(start<=end){
        int mid = start + (end-start)/2;

        if(mid == x/mid){
          return mid;
        }else if(mid < x/mid){
          ans = mid;
          start = mid+1;
        }else{
          end = mid-1;
        }
      };
  return ans;
  };
};

int main(){

  Solution Obj;
  cout << Obj.Sqrt(16);

  return 0;
};
