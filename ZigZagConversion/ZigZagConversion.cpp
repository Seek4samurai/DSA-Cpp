#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string convert(string str, int nRows){
      if(nRows<=0) return str;

      int size = str.size();
      string * arr = new string[nRows];

      int row = 0;
      int steps = 1;
      for(int i=0; i<size; i++){
        arr[row].push_back(str[i]);

        // row++ or row--
        if(row==0) steps = 1;
        else if(row==nRows-1) steps = -1;
        row = row + steps;
      }
      str = "";
      for(int i=0; i<nRows; i++){
        str = str + arr[i];
      }
      return str;
    }
};

int main(){
  string myString = "paypalishiring";

  Solution obj;
  cout << obj.convert(myString, 3);
  return 0;
}