#include<iostream>
#include <vector>
using namespace std;


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ans = 0;
        
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val) {
                nums[ans] = nums[i];
                ans++;
            }
            
        }
        
        nums.erase(nums.begin()+ans,nums.end());
        
        return ans;
    }
};