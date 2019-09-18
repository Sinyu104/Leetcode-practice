#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;



class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> count;
        
        for(string s :strs){
            string temp = s;
            sort(temp.begin(),temp.end());
            if(count.find(temp)==count.end()) {
                vector<string> t;
                t.push_back(s);
                count[temp]=t;
            }
            else{
                count[temp].push_back(s);
            }
        }
        for(auto it =count.begin();it!=count.end();it++){
            ans.push_back(it->second);
        }
        return ans;
    }
};