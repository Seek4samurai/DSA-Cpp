#include <bits/stdc++.h>
using namespace std;

void removeChar(char arr[], char victim){
  if(arr[0]=='\0'){
    return;
  }
  if(arr[0]!=victim){
    removeChar(arr+1, victim);
  }
  else {
    for(int i=0; arr[i]!='\0';i++){
      arr[i] = arr[i+1];
    }
    removeChar(arr, victim);
  }
}

int main(){
  char myArr[] = "Hello World";
  cout << myArr << endl;
  removeChar(myArr, 'l');
  cout << myArr;
  return 0;
};
