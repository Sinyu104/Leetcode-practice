#include <vector>
#include <algorithm>
using namespace std;


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        vector<int> count;
        
        for(int i=0;i<nums.size();i++){
            if(find(count.begin(), count.end(),nums[i])!=count.end()) return true;
            else count.push_back(nums[i]);
        }
        return false;
    }
};