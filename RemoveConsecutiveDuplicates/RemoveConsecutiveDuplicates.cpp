#include <bits/stdc++.h>
using namespace std;

void removeDupes(char arr[]){
  if(arr[0]=='\0'){
    return;
  }
  if(arr[0]!=arr[1]){
    removeDupes(arr+1);
  }
  else{
    for(int i=0; arr[i]!='\0';i++){
      arr[i] = arr[i+1];
    }
    removeDupes(arr);
  }
};

int main(){
  char myArr[] = "Mississippi\n";
  cout << myArr;
  removeDupes(myArr);
  cout << myArr;
  return 0;
};
