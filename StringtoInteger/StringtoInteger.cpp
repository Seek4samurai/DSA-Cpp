#include <bits/stdc++.h>
using namespace std;

int length(char input[]){
  if(input[0]=='\0'){
    return 0;
  }
  return 1+length(input+1);
}

int strToInt(string str, int size){
  if(size==0){
    return 0;
  }
  int smallAnswer = strToInt(str, size-1);
  int lastDigit = str[size-1]-'0';
  return smallAnswer*10+lastDigit;
};

int main(){
  char str[] = "12345";
  int size = length(str);
  cout << strToInt(str, size);
  return 0;
};
