#include <bits/stdc++.h>
using namespace std;

void printSubseq(string input, string output){
  if(input.length() == 0){
    cout << output << endl;
    return;
  }
  printSubseq(input.substr(1), output);
  printSubseq(input.substr(1), output + input[0]);
};

int main(){
  char myArr[] = "abc";
  string output = "";
  printSubseq("abc",output);
  return 0;
};
