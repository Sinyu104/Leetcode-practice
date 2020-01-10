#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans;
        for(int i=0;i<n/2;i++){
            ans.push_back((n/2-i)*(-1));
            ans.push_back(n/2-i);
        }
        if(n%2!=0) ans.push_back(0);
        
        return ans;
    }
};