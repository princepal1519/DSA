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


        while (current) {
            if (current->next  && current->val == current->next->val) {
                int x = current->val;
                while (current && current->val == x) {
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