#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        char alph ;
        for(int i=0; i<s.size()/2;i++){
            alph = s[i];
            s[i]=s[s.size()-1-i];
            s[s.size()-1-i] = alph;
        }
        
    }
};