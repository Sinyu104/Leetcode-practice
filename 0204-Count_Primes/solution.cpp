#include <iostream>
#include <math.h>
using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        int ans = 0;
        for(int i=2;i<n;i++){
            if(isPrimes(i))  ans++;
        }
        return ans;
    }
private:
    bool isPrimes(int n){
        if(n%2==0 && n!=2) return false;
        for(int i=3;i<=sqrt(n);i+=2){
            if(n%i==0) return false;
        }
        return true;
        
    }
};