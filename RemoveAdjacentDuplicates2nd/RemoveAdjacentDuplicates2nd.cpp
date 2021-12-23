#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
   
  class Pair{
  public:
    char first;
    int second;
    Pair(char f,int s){
      first = f;
      second = s;
    }
  };
    string removeDuplicates(string A, int k) {

        stack<Pair> s;
        for(int i=0;i<A.size();i++){
          if(s.empty() || A[i] != s.top().first){
            Pair p(A[i],1); 
            s.push(p);
          } 
          else {
            s.top().second++;
            int count = s.top().second;
            if(count==k){
              s.pop();
            }
          }
        }
        
    string ans="";
    while(!s.empty()){
      int count = s.top().second;
      while(count--){
        ans.push_back(s.top().first);
      }
      s.pop();
    }
    
    reverse(ans.begin(),ans.end());
    return ans;

    /// inbuilt pair class
    //  string removeDuplicates(string A, int k) {

    //     stack<pair<char,int> > s;
    //     for(int i=0;i<A.size();i++){
    //         if(s.empty() || A[i] != s.top().first){
    //            s.push(make_pair(A[i],1));
    //         } else {
    //            /// A[i] = top element 
    //            s.top().second++;
    //            int count = s.top().second;
    //            if(count==k){
    //              s.pop();
    //            }
    //         }
    //     }        
    //     string ans="";
    //     while(!s.empty()){
    //         int count = s.top().second;
    //         while(count--){
    //           ans.push_back(s.top().first);
    //         }
    //         s.pop();
    //     }
        
    //     reverse(ans.begin(),ans.end());
    //     return ans;
    
    }
};
int main (){
  Solution myObj;
  cout << myObj.removeDuplicates("mississippi",2);
};