#include <bits/stdc++.h>
using namespace std;

void printPermutation(char str[], int index){
  if(str[index]=='\0'){
    cout << str << endl;
    return;
  }
  for (int j = index; str[j]!='\0';j++){
    swap(str[index], str[j]);
    printPermutation(str, index+1);
    swap(str[index], str[j]);
  }
}

int main(){
  char str[] = "123";
  printPermutation(str, 0);
  return 0;
};
