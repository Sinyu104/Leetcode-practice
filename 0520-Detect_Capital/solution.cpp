#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool detectCapitalUse(string word) {
        int capital = 0;
        for(int i=0;i<word.size();i++){
            if(word[i]<='Z') capital++;
        }
        
        return capital==word.size()||capital ==0||(capital==1 && word[0]<='Z');
        
    }
};