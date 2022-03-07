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
    ListNode* merge(ListNode* l1,ListNode* l2){
        if(l1==NULL )return l2;
        if(l2==NULL) return l1;
        ListNode* result;
        if(l1->val < l2->val){
            result=l1;
            result->next=merge(l1->next,l2);
            
        }else{
            result=l2;
            result->next=merge(l1,l2->next);
        }
        return result;
    }
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        return merge(l1,l2);
    }
};