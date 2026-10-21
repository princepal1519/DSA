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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k==0)return head;
        
        ListNode *slow=head;
        ListNode  *fast=head;
        ListNode *count=head;
        int count_list=1;
        while(count->next!=NULL){
            count=count->next;
            count_list++;
        }
        k=k%count_list;
        if(k==0)return head;
        int c=0;
        while(c<k){
            c++;
            fast=fast->next;
        }
        while(fast->next!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
        ListNode *newnode=slow->next;
        slow->next=NULL;
        fast->next=head;
        head=newnode;
        return head;

    }
};