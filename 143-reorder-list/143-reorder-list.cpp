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


// {solution 1ST using ARRAY}


//  void reorderList(ListNode* head) {
//       vector<int>arr;
//         ListNode* curr=head;
//         while(curr){
//             arr.push_back(curr->val);
//             curr=curr->next;
//         }
//         int i=0,j=arr.size()-1;
//         int ind=0;
//         while(head){
//            if(ind==0)
//            {
//                head->val=arr[i++];
//            }else{
//                head->val=arr[j--];
//            }
//             ind=!ind;
//             head=head->next;
            
//         }
        
        
//     }





class Solution {
public:
    ListNode* reverse(ListNode* head){
        if(head==NULL)
            return NULL;
        ListNode* prev=NULL,*curr=head;
        while(curr){
            ListNode* nextNode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextNode;
        }
        return prev;
    }
    ListNode* findMid(ListNode* head){
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* prev;
        while(slow && fast && fast->next){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
            
        }
        prev=slow->next;
         slow->next=NULL;
        return prev;
        
    }
    void reorderList(ListNode* head) {
         if(head==NULL||head->next==NULL||head->next->next==NULL)
            return ;
        ListNode* head2=findMid(head);
        head2=reverse(head2);
        
        ListNode* curr1=head,*curr2=head2;
         while(curr1 && curr2){
            ListNode* temp1=curr1->next;
            ListNode* temp2=curr2->next;
            curr1->next=curr2;
            curr2->next=temp1;
            curr1=temp1;
            curr2=temp2;
        }
     
    }
};