#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        set<int> x;
        int xs = x.size();
        for(const auto& n : nums) {
            x.insert(n);
            if(xs == x.size()) {
                return n;
            }
            xs = x.size();
        }
        return 0;
    }
};