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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || !headB) return NULL;
        ListNode *nodeA = headA;
        ListNode *nodeB = headB;
        int sizeA = 0;
        int sizeB = 0;
        while(nodeA){
            nodeA = nodeA->next;
            sizeA++;
        }
        while(nodeB){
            nodeB = nodeB->next;
            sizeB++;
        }
        for(int i= 0;i<abs(sizeB-sizeA);i++){
            if(sizeA>sizeB) headA = headA->next;
            else headB = headB->next;
        }
        while(headA!=headB){
            headA = headA->next;
            headB = headB->next;
        }
        return headA;
    }
};