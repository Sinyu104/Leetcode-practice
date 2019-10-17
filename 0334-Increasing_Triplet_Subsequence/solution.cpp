class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {

        int max = INT_MAX;
        int min = INT_MAX-1;

        for(int i=0;i<nums.size();i++){
            if(nums[i]<=min)    min=nums[i];
            else if(nums[i]>min && nums[i]<=max)    max = nums[i];
            else    return true;
        }
        return false;
        
    }
};
