/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        unordered_set<ListNode*>li;
        ListNode * curr=head;
        while(curr!=NULL){
            if(li.find(curr)!=li.end())
                return true;
            else
                li.insert(curr);
            curr=curr->next;
        }
    
      return false;  
    }
};