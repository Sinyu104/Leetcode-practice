#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;



class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        
        map<int, int> num1_count;
        map<int, int> num2_count;
        
        for(int i=0;i<nums1.size();i++){
            if(num1_count.find(nums1[i])==num1_count.end()) num1_count[nums1[i]] = 1;
            else{
                num1_count[nums1[i]] ++;
            }
        }
        for(int i=0;i<nums2.size();i++){
            if(num2_count.find(nums2[i])==num2_count.end()) num2_count[nums2[i]] = 1;
            else{
                num2_count[nums2[i]] ++;
            }
        }
        
        map<int, int> :: iterator it1 = num1_count.begin();
        map<int, int> :: iterator it2 = num2_count.begin();
        
        vector<int> ans;
        
        while(it1!=num1_count.end() && it2!=num2_count.end()){
            if(it1->first < it2->first) it1++;
            else if(it1->first > it2->first) it2++;
            else{
                for(int j = 0; j< min(it1->second, it2->second);j++){
                    ans.push_back(it1->first);
                }
            }
        }
        
        return ans;
        
    }
};