#include<iostream>
#include<string> 
#include<vector> 
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
       /* string answer = "";
        if(strs.size()==0) return "";
        
        string s = *min_element(strs.begin(),strs.end());  /// return min string
        
        for(int i=0;i<s.size();i++){
            for(int j=0;j<strs.size();j++){
                if(s[i] != strs[j][i]){
                    return answer;
                }
            }
            answer.push_back(s[i]);
        }
        return answer;*/
        
        string answer = "";
        if(strs.size()==0) return "";
        
        string s = strs[0]; 
        
        for(int i=0;i<s.size();i++){
            for(int j=1;j<strs.size();j++){
                if(i>=strs[j].size() || s[i] != strs[j][i]){
                    return answer;
                }
            }
            answer.push_back(s[i]);
        }
        return answer;
    }
};