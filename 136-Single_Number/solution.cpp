#include "iostream"
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> num;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(num.find(nums[i])==num.end()){
                sum+=nums[i];
                num[nums[i]] =1;
            }
            else{
                sum-=nums[i];
            }
            
        }
        return sum;
    }
};