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
    ListNode* swapNodes(ListNode* head, int k) {
        int i =1;
        int s=0;
        ListNode* curr=head;
        ListNode* curr1=head;
        while(curr){
            s++;
            if(i<k){
              i++;
              curr1=curr1->next;  
            }          
            curr=curr->next;
        }
      
        ListNode* temp=head;
        int  t=1;
        while(t<=s-k){
            t++;
           temp=temp->next;
        }
        int swap =curr1->val;
        curr1->val=temp->val;
        temp->val =swap;
        return head;
    }
};