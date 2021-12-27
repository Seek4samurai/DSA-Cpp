#include <bits/stdc++.h>
using namespace std;

void PrintChar(char input[]){
  if(input[0]=='\0'){
    return;
  }
  cout << input[0];
  PrintChar(input+1);
};

void PrintReverse(char input[]){
  if(input[0]=='\0'){
    return;
  }
  PrintReverse(input+1);
  cout << input[0];
};

int main(){
  char arr[] = "Hello";
  PrintChar(arr);
  PrintReverse(arr);
  return 0;
};
