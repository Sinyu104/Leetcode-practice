#include <iostream>
using namespace std;

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prem = dummy;
        ListNode* nodem = head;
        ListNode* noden = head;
        
        if(!head) return head;
        
        for(int i=1;i<m;i++){
            prem = prem->next;
            nodem = nodem->next;
        }
        
        for(int i=1;i<n;i++){
            
            noden = noden->next;
        }
        
        
        while(nodem != noden){
            
            prem->next = nodem->next;
            nodem->next = noden->next;
            noden->next = nodem;
            nodem = prem->next;
        }
        
        return dummy->next;
        
    }
};