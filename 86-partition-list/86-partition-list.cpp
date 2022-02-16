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
   
    ListNode* partition(ListNode* head, int x) {
        
       ListNode* dumm1=new ListNode(0);
       ListNode* dumm2=new ListNode(0);
       ListNode* h1=dumm1;
       ListNode* h2=dumm2;
        
       while(head){
           if(head->val<x){
               h1->next =head;
               h1=h1->next;
           }else{
               h2->next=head;
               h2=h2->next;
           }
           head=head->next;
       } 
        
      
     
      
       h1->next =dumm2->next;
       h2->next=NULL; 
       return dumm1->next; 
        
    }
};