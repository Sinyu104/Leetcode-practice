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
    ListNode* oddEvenList(ListNode* head) {
        if (head == nullptr)
            return nullptr;
        if (head->next == nullptr || head->next->next == nullptr)
            return head;
        ListNode * head_odd = head, * head_even = head->next;
        ListNode * even = head_even, * odd = head_odd;
        while (even != nullptr && even->next != nullptr) {
            ListNode * even_next = even->next;
            odd->next = even_next;
            even->next = even_next->next;
            even = even->next;
            odd = odd->next;
        }
        odd->next = head_even;
        return head_odd;
    }
};