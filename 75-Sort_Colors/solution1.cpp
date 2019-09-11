#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    void sortColors(vector<int>& nums) {
        int first = 0;
        int last = nums.size()-1;
        
        for(int i=0; i<=last;i++){
            if(nums[i]==0){
                swap(nums[i],nums[first]);
                first++;
                
            }
            else if(nums[i]==2){
                swap(nums[i],nums[last]);
                last--;
                i--;
            }
            
        }
        
    }
};