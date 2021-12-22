#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& str) {
        stack<char> mystack;

        for(int i=0;i<str.size();i++){
            mystack.push(str[i]);
        }
        for(int i=0;i<str.size();i++){
            str[i] = mystack.top();
            mystack.pop();
        }
    };
    void reverseStringNew(vector<char>& str){
        // Method #2
        int start=0;
        int end = str.size()-1;
        
        while(start<=end){
            swap(str[start],str[end]);
            start++;
            end--;
        }
    };
    string reverseStringFunc(string str) {
        // Method #3 using reverse function
        reverse(str.begin(),str.end());
        return str;
    };
};

int main(){
    Solution myObj;
    string mystr = "Hello";
    vector<char> myStr = {'A', 'B'};
    vector<char> myStrNew = {'1', '2'};
    cout << myStr[0] << endl;
    myObj.reverseString(myStr);
    cout << myStr[0] << endl;
    myObj.reverseStringNew(myStrNew);
    cout << myStrNew[0];
    return 0;
};
