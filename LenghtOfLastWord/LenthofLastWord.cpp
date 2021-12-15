#include<iostream>
#include<string> 
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int n = s.size();
        int i = 0;
        while(i<n){
            if(s[i]!=' '){
                count++;
                i++;
            }else{
                /// current char is a space
                while(i<n && s[i]==' ')i++;
                
                if(i==n){   /// end of string
                    return count;
                }else{
                    count = 0;
                }
                
            }
        }
        
        return count;
    }
};

int main()
{
  	string s;
    getline(cin,s);
    Solution object;
    int SizeOfString = object.lengthOfLastWord(s);
    cout << SizeOfString << endl;
    
}
