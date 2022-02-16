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
    int length(ListNode* head){
        int i=0;
        ListNode* curr=head;
        while(curr){
            i++;
            curr=curr->next;
        }
        return i;
    }
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> ans(k,NULL);
        int  n=length(head);
        int len=n/k;
        int reminderLen=n%k;
        ListNode* temp=head;
        ListNode* prev =NULL ;
        int  i=0;
        while(temp && i<k){
            ans[i]=temp;
            for(int j=0;j<len+(reminderLen>0?1:0);j++){
                prev =temp;
                temp=temp->next;
            }
            prev->next=NULL;
            i++;
            reminderLen--;
        }
       return ans; 
    }
};