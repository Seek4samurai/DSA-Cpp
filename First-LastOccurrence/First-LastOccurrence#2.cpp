#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
  int getIndex(vector<int>& arr, int target, bool searchFirst){
    int start = 0;
    int end = arr.size()-1;
    int answer = -1;
    while(start<=end){
      int mid = start + (end-start)/2;

      if(arr[mid]==target){
        answer = mid;
        if(searchFirst){
          end = mid-1;
        }else{
          start = mid+1;
        }
      }else if(arr[mid]<target){
        start = mid+1;
      }else{
        end = mid-1;
      }
    }
    return answer;
  };

  vector<int> searchRange(vector<int>& arr, int target){
    vector<int> myVector(2, -1);
    int first = getIndex(arr, target, true);
    if(first == -1){
      return myVector;
    }
    int last = getIndex(arr, target, false);
    myVector[0] = first;
    myVector[1] = last;
    return myVector;
  };
};

int main(){
  vector<int> myVector = {1,2,3,3,3,4,4,5,5,5,6,6};
  Solution myObj;
  vector<int> ans = myObj.searchRange(myVector, 3);

  for(int i=0; i<ans.size(); i++){
    cout << ans[i] << " ";
  }

  return 0;
};
