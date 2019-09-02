# include <iostream>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
 };

 class Solution {
public:

    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode ans(0);
        ListNode* Ans=&ans;      
        
        while(l1 && l2){
            
            if(l1->val<l2->val){
                Ans-> next = l1;
                l1 = l1->next;
            }
            else{
                Ans-> next = l2;
                l2 = l2->next;
            } 
            Ans = Ans->next;
        }
        if(l1) Ans->next = l1;
        if(l2) Ans->next = l2;
        return ans.next;
        
    }
};