#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> freq;
        int max_freq = 0;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
            max_freq = max(max_freq, freq[nums[i]]);
        }
        
        map<int, vector<int>> freq_rank;
        for(auto it = freq.begin();it!=freq.end();it++){
            freq_rank[it->second].push_back(it->first);
        }
        vector<int> ans;
        for(int i=max_freq;i>0;i--){
            auto it = freq_rank.find(i);
            if(it == freq_rank.end()) continue;
            ans.insert(ans.end(),it->second.begin(),it->second.end());
            if(ans.size()==k) return ans;
        }
        return ans;
    }
};