#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int size = strs.size();
        char letter;
        string ans;
        if(strs.size() == 0) return ans;
        for(int i=0;i<strs[0].size();i++){
            letter = strs[0][i];
            for(int j=1;j<size;j++){
                if(strs[j][i] != letter) return ans;
            }
            ans.push_back(letter);
        }
        
        return ans;
        
    }
};