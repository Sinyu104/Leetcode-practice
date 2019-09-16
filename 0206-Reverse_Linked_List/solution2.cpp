#include <iostream>
using namespace std;

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


ListNode *reverseListRecursivelyR(ListNode *cur, ListNode *pre) {
  if (cur) {
    ListNode *cur_next = cur->next;
    cur->next = pre;
    return reverseListRecursivelyR(cur_next, cur);
  } else {
    return pre;
  }
}

ListNode *reverseListRecursively(ListNode *head) {
  return reverseListRecursivelyR(head, nullptr);
}