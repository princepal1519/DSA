# Remove Duplicates from Sorted List II

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given the `head` of a  **sorted**  linked list.

Delete all nodes that have  **duplicate**  numbers, leaving only  **distinct**  numbers from the original list.

Return the linked list  **sorted**  as well.

 

 **Example 1:** 

```
Input: head = [1,2,3,3,4,4,5]
Output: [1,2,5]

```

 **Example 2:** 

```
Input: head = [1,1,1,2,3]
Output: [2,3]

```

 

 **Constraints:** 

- The number of nodes in the list is in the range [0, 300].
- -100 <= Node.val <= 100
- The list is guaranteed to be sorted in ascending order.

## Solution

**Language:** C++  
**Runtime:** 0 ms  
**Memory:** 8.4 MB  
**Submitted:** 2026-10-26T14:33:53.538Z  

```cpp
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
```

---

[View on LeetCode](https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/)