#include <bits/stdc++.h>
using namespace std;

void replaceChar(char arr[], char oldChar, char newChar){
  if(arr[0]=='\0'){
    return;
  }
  if(arr[0]==oldChar){
    arr[0]=newChar;
  }
  replaceChar(arr+1, oldChar, newChar);
}

int main(){
  char myArr[] = "Hello World";
  cout << myArr << endl;
  replaceChar(myArr, 'o', 'z');
  cout << myArr;
  return 0;
};
