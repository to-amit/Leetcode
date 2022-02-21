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
    ListNode* reverse(ListNode* head,int right,int i){
        ListNode * prev=NULL;
        ListNode* curr=head;
        ListNode* next;
        while( curr && i<=right){
            i++;
            next =curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
      
        ListNode* temp=prev;
        while(temp&& temp->next){
            temp=temp->next;
        }
        temp->next=curr;
        return prev;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* curr=head;
        if(left==right) return head;
        if(head==NULL || head->next==NULL) return head;
        ListNode* temp;
       int i=1; 
       while(curr && i<left){
           i++;
           temp=curr;
           curr=curr->next;
       }
       if(temp!=NULL) 
       temp->next =reverse(curr,right,i);
       else
           head =reverse(curr,right,i);
       return head; 
    }
};