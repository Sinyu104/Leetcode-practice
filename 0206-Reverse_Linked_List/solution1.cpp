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
    ListNode* reverseList(ListNode* head) {
        if(!head) return head;
        ListNode* pre = new ListNode(0);
        ListNode* node = head;
        ListNode* pro = head->next;
        
        pre->next = NULL;
        
        while(pro){
            node->next = pre;
            pre = node;
            node = pro;
            pro = pro->next;
        }
        node->next = pre;
        head ->next = NULL;
        return node;
    }
};