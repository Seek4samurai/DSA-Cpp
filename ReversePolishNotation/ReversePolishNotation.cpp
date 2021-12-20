#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
  int evalRPN(vector<string>& tokens) {
    stack<int> st;
    
    for(int i=0;i<tokens.size();i++){
        
    if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/"){
      int v1 = st.top();
      st.pop();
      int v2 = st.top();
      st.pop();
      if(tokens[i]=="+"){
        st.push(v2+v1);
      }
      else if(tokens[i]=="-"){
        st.push(v2-v1);
      }
       else if(tokens[i]=="*"){
        st.push(v2*v1);
      }
       else if(tokens[i]=="/"){
        st.push(v2/v1);
      }
    }
    else {
      st.push(atoi(tokens[i].c_str()));
    }
  }
    return st.top();
  }
};

int main(){
  Solution object;
  vector<string> myNot = {"4","5","+"};
  cout << object.evalRPN(myNot);
  return 0;
};
