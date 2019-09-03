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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || k == 0) return head;
        ListNode *node = head, *tail, *prev;
        int count = 1;
        
        while (node->next) {
            count++;
            node = node->next;
        }
        tail = node;
        k = k % count;
        tail->next = head;
        node = head;
        prev = head;
        int moves = count - k;
        for (int i = 0; i < moves; i++) {
            prev = node;
            node = node->next;
        }
        prev->next = NULL;
        return node;
    }
};