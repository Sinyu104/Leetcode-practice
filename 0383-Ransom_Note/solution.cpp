#include<iostream>
#include<map> 
using namespace std;


class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        map<char,int> character;
        for(int i=0;i<ransomNote.size();i++){
            if(character.find(ransomNote[i])==character.end()){
                character[ransomNote[i]] = 1;
            }
            else{
                character[ransomNote[i]]++;
            }
        }
        
        for(int i=0;i<magazine.size();i++){
            if(character.find(magazine[i])==character.end()){
                character[magazine[i]] = -1;
            }
            else{
                character[magazine[i]]--;
            }
        }
        for(auto it = character.begin();it!=character.end();it++){
            if(it->second>0) return false;
        }
        return true;
    }
};