/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
     
class Solution {
public:
    ListNode* removeElements(ListNode* head, int x) {
         if(head==NULL)
             return NULL;
      ListNode * dum=new ListNode(-1)    ;
      ListNode * pre=dum;
        
        
    ListNode * curr=head;
        dum->next=curr;
        while(curr!=NULL){
            if(curr->val==x){
               
                pre->next=curr->next;
            }
            else{
                pre=pre->next;
            }
            curr=curr->next;
        }
        return dum->next;
        
        
        
        
        
    }
};