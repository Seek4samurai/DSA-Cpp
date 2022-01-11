#include <bits/stdc++.h>
using namespace std;

int getFirst(vector<int>& arr, int target){
  int start = 0;
  int end = arr.size()-1;
  int answer = -1;

  while(start<=end){
    int mid = start + (end-start)/2;

    if(arr[mid]==target){
      answer = mid;
      end = mid-1; // Search LHS for first occurence
    }else if(arr[mid]<target){
      start = mid+1;
    }else{
      end = mid-1;
    }
  }
  return answer;
};

int getLast(vector<int>& arr, int target){
  int start = 0;
  int end = arr.size()-1;
  int answer = -1;

  while(start<=end){
    int mid = start + (end-start)/2;

    if(arr[mid]==target){
      answer = mid;
      start = mid+1; // Search RHS for last occurence
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
  int first = getFirst(arr, target);

  if(first == -1){
    return myVector;
  }

  int last = getLast(arr, target);
  myVector[0] = first;
  myVector[1] = last;
  return myVector;
};

int main(){
  vector<int> myVector = {1,2,3,3,3,4,4,5,5,5,6,6};

  vector<int> ans = searchRange(myVector, 6);
  for (int i=0; i<ans.size(); i++){
    cout << ans[i] << " ";
  }

  return 0;
};
