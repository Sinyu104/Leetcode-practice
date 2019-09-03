#include "iostream"
#include <vector>
using namespace std;

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(!head) return true;
        int listsize = 0;
        vector<int> listvalue;
        while(head){
            listvalue.push_back(head->val);
            listsize++;
            head = head->next;
        }
        for(int i=0;i<listsize/2;i++){
            if(listvalue[i]!=listvalue[listsize-i-1]) return false;
        }
        return true;
    }
};