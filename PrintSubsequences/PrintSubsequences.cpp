#include <bits/stdc++.h>
using namespace std;

void printSubseq(string input, string output, vector<string> &vec){
  if(input.length() == 0){
    vec.push_back(output);
    return;
  }
  printSubseq(input.substr(1), output, vec);
  printSubseq(input.substr(1), output + input[0], vec);
};

int main(){
  string input;
  cin >> input;
  string output = "";
  vector<string> vec;
  printSubseq(input,output,vec);
  for(int i=0;i<vec.size();i++){
    cout << vec[i] << endl;
  }
  return 0;
};
