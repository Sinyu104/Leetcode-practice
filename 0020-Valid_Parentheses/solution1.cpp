# include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> count;
        for(int i=0;i<s.size();i++){
            if((s[i] =='(')||(s[i] =='[')||(s[i] =='{')) count.push(s[i]);
            else if(!count.empty()){
                if((count.top()=='(' && s[i]==')')||(count.top()=='[' && s[i]==']')||(count.top()=='{' && s[i]=='}')) count.pop();
                else {return false;}
            }
            else return false;
        }
        if(count.empty()) return true;
        else return false;    
    }
        
};