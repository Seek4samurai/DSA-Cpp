#include<bits/stdc++.h>
using namespace std;

void printAllPos(int arr[],int n,int x,int i){
    if(i==n){
      return;
    }
    if(arr[i]==x){
      cout<<i<<" ";
    }
    printAllPos(arr,n,x,i+1);
};
void count(int arr[],int n,int x,int i, int &ans){
  if(i==n){
    return;
  }
  if(arr[i]==x){
    ans++;
  }
  count(arr,n,x,i+1,ans);
};
int main(){
  int myArr[] = {5,5,6,5,6,7};
  int ans = 0;
  count(myArr,6,5,0,ans);
  cout<<ans<<endl;
  return 0;
};
