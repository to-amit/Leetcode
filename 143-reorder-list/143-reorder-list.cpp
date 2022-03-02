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
    void reorderList(ListNode* head) {
      vector<int>arr;
        ListNode* curr=head;
        while(curr){
            arr.push_back(curr->val);
            curr=curr->next;
        }
        int i=0,j=arr.size()-1;
        int ind=0;
        while(head){
           if(ind==0)
           {
               head->val=arr[i++];
           }else{
               head->val=arr[j--];
           }
            ind=!ind;
            head=head->next;
            
        }
        
        
    }
};