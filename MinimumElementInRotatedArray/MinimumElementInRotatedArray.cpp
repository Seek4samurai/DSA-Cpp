#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
  int findMin(vector<int>& arr){
    int start = 0;
    int size = arr.size();
    int end = size-1;

    while(start<=end){
      int mid = (start+end)/2;
      int next = (mid+1)%size;
      int prev = (mid-1)%size;

      if(arr[mid]<=arr[prev] && arr[mid]<=arr[next]){
        return arr[mid];
      }else if (arr[mid]<=arr[end])
      {
        end = mid-1;
      }else if (arr[mid] >= arr[start])
      {
        start = mid+1;
      }
    }
    return -1;
  }
};

int main(){
  Solution Object;
  vector<int> vect = {6,7,8,1,2,3,4,5};

  cout << Object.findMin(vect);

  return 0;
};
