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
    ListNode* findMid(ListNode* head){
        ListNode * temp=NULL;
        ListNode* slow=head;
        ListNode* fast =head;
        while(fast!=NULL && fast->next!=NULL){
            temp=slow;
            slow=slow->next;
            fast =fast->next->next;
        }
        temp->next=NULL;
        return slow;
    }
    ListNode* merge(ListNode* h1,ListNode* h2){
        ListNode* a=h1;
        ListNode* b=h2;
        ListNode* dumm =new ListNode(-1);
        ListNode* temp=dumm;
        while(a!=NULL && b!=NULL){
            if(a->val < b->val){
                temp->next =a;
                a=a->next;
            }else{
                temp->next =b;
                b=b->next;
            }
            temp=temp->next;
        }
        if(a){
            temp->next=a;
            
        }
        if(b){
            temp->next=b;
          
        }
        return dumm->next;
    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next ==NULL) return head;
        ListNode* mid =findMid(head);
       
        ListNode* first=sortList(head);
        ListNode* second=sortList(mid);
        return merge(first,second);
        
    }
};