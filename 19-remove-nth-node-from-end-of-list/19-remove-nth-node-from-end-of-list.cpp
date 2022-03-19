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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int i=0;
        ListNode* curr=head;
        while(curr!=NULL)
        {
            i++;
            curr=curr->next;
        }
        if(i==1 && n==1)
            return NULL;
        if(i==n)
        {
            return head->next;
        }
            
      ListNode* temp=head;
        int c=1;
        while(c<i-n){
           
           temp=temp->next;
             c++;
        }
        temp->next=temp->next->next;
      
        return head;
    }
};