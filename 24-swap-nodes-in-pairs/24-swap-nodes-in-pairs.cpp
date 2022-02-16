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

//  ListNode* swapPairs(ListNode* head) {
//          if(head ==NULL || head->next==NULL) return head;
//          ListNode* curr=head->next;
//          ListNode* prev=head;
//          while(curr && curr->next && curr->next->next){
//              swap(prev->val,curr->val);
//              curr=curr->next->next;
//              prev=prev->next->next;
//          }
//          swap(prev->val,curr->val);
//          return head;
        
//     }

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
         if(head ==NULL || head->next==NULL) return head;
         
           
            ListNode* temp =head->next;
            head->next =swapPairs(head->next->next);
            temp->next =head;
            return temp;
    }
};