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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode dummy(0);
        dummy.next = head;

        ListNode* previous = &dummy;
        ListNode* current = head;

        if(head==NULL)return NULL;

        if (current->next != NULL && current->val == current->next->val) {
            int x = current->val;
            while (current->next != NULL && current->val == x) {
                current = current->next;
            }
            if(current->next==NULL && current->val==x)return NULL;
            previous->next = current;
        }

        while (current) {
            if (current->next != NULL && current->val == current->next->val) {
                int x = current->val;
                while (current->next != NULL && current->val == x) {
                    current = current->next;
                }
                previous->next = current;
            } else {
                previous = current;
                current = current->next;
            }
        }
        return dummy.next;
    }
};