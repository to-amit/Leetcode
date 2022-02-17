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
//  ListNode* deleteDuplicates(ListNode* head) {
//  ListNode * temp = new ListNode(0); 
//         temp->next=head;
//         ListNode * prev = temp;  
        
//         while(head) 
//         {
//             if(head->next && head->val == head->next->val)
//             {
//                 while(head->next  && head->val == head->next->val)
//                 {
//                     head = head->next;
//                 }
//                 prev->next = head->next; 
// 				}
//             else
//                 prev = prev ->next; 
//             head= head->next;
//         }
//         return temp->next;
//     }
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !head->next) return head;

        if (head->next->val != head->val) {
            head->next = deleteDuplicates(head->next);
        }
        else {
            while (head->next && head->next->val == head->val)
                head = head->next;
            return deleteDuplicates(head->next);
        }
        
        return head;
    }
};