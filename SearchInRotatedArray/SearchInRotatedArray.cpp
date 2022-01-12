#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int search(vector<int> arr, int key){
      int start = 0;
      int end = arr.size()-1;
      while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid]==key){
          return mid;
        }
        else if(arr[mid]<arr[end]){
          if(key<=arr[end] && key>=arr[mid]){
            start = mid+1;
          }else{
            end = mid-1;
          }
        }
        else{
          if(key>=arr[start] && key<=arr[mid]){
            end = mid-1;
          }else{
            start = mid+1;
          }
        }
      }
      return -1;
    }
};

int main(){
  Solution myObj;
  vector<int> myVector = {4,5,6,7,0,1,2};

  cout << myObj.search(myVector, 0);

  return 0;
}