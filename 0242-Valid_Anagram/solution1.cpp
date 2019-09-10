#include <iostream>
#include <string>
#include <map>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        
        map<char, int> maps;
        map<char, int> mapt;
        for(int i=0; i<s.size();i++){
            if(maps.find(s[i])==maps.end()) maps[s[i]] = 1;
            else maps[s[i]]++ ;
            
            if(mapt.find(t[i])==mapt.end()) mapt[t[i]] = 1;
            else mapt[t[i]]++;
            
        }
        map<char, int>:: iterator its;
        map<char, int>:: iterator itt;
        for(its = maps.begin(),itt = mapt.begin();its!=maps.end() && itt!=mapt.end();its++, itt++){
            if(its->first!=itt->first) return false;
            if(its->second!=itt->second) return false;
        }
        
        return true;
    }
};