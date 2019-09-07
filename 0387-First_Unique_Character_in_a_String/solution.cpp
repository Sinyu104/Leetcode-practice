#include <iostream>
#include <map>
using namespace std;


class Solution {
public:
    
    int firstUniqChar(string s) {
        map<char, int> word;
        
        for(int i=0;i<s.size();i++){
            if(word.find(s[i]) != word.end()) word[s[i]]++;
            else word[s[i]] = 1;
        }
        
        for(int i=0;i<s.size();i++){
            if(word[s[i]]==1) return i;
        }
        return -1;
        
    }
};
