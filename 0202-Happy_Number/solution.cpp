#include <vector>
#include <algorithm>
using namespace std;



class Solution {
public:
    vector<int> count;
    bool isHappy(int n) {
        if(n==1) return true;
        else if(find(count.begin(),count.end(),n)!=count.end()) return false;
        count.push_back(n);
        vector<int> digits;
        while(n/10>0){
            digits.push_back(n%10);
            n/=10;
        }
        digits.push_back(n);
        n = 0;
        for(int i=0;i<digits.size();i++){
            n+=digits[i]*digits[i];
        }
        
        return isHappy(n);
    }
};