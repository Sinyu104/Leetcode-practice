#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int major = nums.size()/2;
        map<int, int> count;
        for(int i=0;i<nums.size();i++){
            if(count.find(nums[i])==count.end()) count[nums[i]] = 1;
            else {
                count[nums[i]]++;
            }
        }
        
        for(auto it = count.begin();it!=count.end();it++){
            if(it->second > major) return it->first;
        }
        return 0;
    }
};