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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* node = new ListNode(0);
        ListNode* head = node;
        ListNode* pre , *pro;
        int carry = 0;
        int num;
        int size = 0;
        
        while(l1&&l2){
            num = l1->val + l2->val + carry;
            carry = num/10;
            node->next = new ListNode(num%10);
            node = node->next;
            l1 = l1->next;
            l2 = l2->next;
            size++;
        }
        
        if(l1){
            while(l1){
                num = l1->val+carry;
                carry = num/10;
                node->next = new ListNode(num%10);
                node = node->next;
                l1=l1->next;
                size++;
            }
                        
        }
        if(l2){
            while(l2){
                num = l2->val+carry;
                carry = num/10;
                node->next = new ListNode(num%10);
                node = node->next;
                l2=l2->next;
                size++;
            }        
        }
        
        if(carry!=0){
            node->next = new ListNode(carry);
        }
        
        
        return head->next;
    }
};