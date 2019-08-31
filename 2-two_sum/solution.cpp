#include "iostream"
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> record;

        for (int i = 0; i != nums.size(); i++) {
            auto found = record.find(nums[i]);
            if (found != record.end())
                return {found->second, i};
            record.insert(unordered_map<int,int>::value_type(target - nums[i], i));
        }
        return {-1, -1};
    }
};

int main(){
  printf("%d",10);
  return 0;
}
