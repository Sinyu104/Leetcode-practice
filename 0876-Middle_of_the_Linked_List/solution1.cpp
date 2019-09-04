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
    ListNode* middleNode(ListNode* head) {
        ListNode* node = head;
        int size = 0;
        while(node){
            node = node->next;
            size++;
        }
        
        for(int i =0;i<size/2;i++){
            head = head->next;
        }
        
        return head;
    }
};
