#include<iostream>
#include<string> 
#include<stack>
#include<vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& str) {
        stack<char> mystack;
        for(int i=0;i<str.size();i++){
             ///pushing every char inside stack
            mystack.push(str[i]);
        }
        
        /// pop every character
        for(int i=0;i<str.size();i++){
            str[i] = mystack.top();
            mystack.pop();
        }
        
        // Method #2

        // int start=0;
        // int end = str.size()-1;
        
        // while(s<=e){
        //     swap(str[start],str[end]);
        //     start++;
        //     end--;
        // }
        
        // Method #3 using reverse function
        // reverse(str.begin(),str.end());
        
        
    }
};
