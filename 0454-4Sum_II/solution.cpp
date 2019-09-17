#include <vector>
#include <unordered_map>
using namespace std;


class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        
        unordered_map<int, int> count;
        int ans = 0;
        for(int i=0;i<A.size();i++){
            for(int j=0;j<B.size();j++){
                if(count.find(A[i]+B[j])==count.end()) count[A[i]+B[j]] = 1;
                else count[A[i]+B[j]]++;
                
            }
        }
        for(int i=0;i<C.size();i++){
            for(int j=0;j<D.size();j++){
                auto it = count.find(-C[i]-D[j]);
                if(it !=count.end()) ans+= it->second;
            }
        }
        return ans;
        
    }
};