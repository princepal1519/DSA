# Rotate List

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given the `head` of a linked list, rotate the list to the right by `k` places.

 

 **Example 1:** 

```
Input: head = [1,2,3,4,5], k = 2
Output: [4,5,1,2,3]

```

 **Example 2:** 

```
Input: head = [0,1,2], k = 4
Output: [2,0,1]

```

 

 **Constraints:** 

- The number of nodes in the list is in the range [0, 500].
- -100 <= Node.val <= 100
- 0 <= k <= 2 * 109

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 16.3 MB (beats 61.27%)  
**Submitted:** 2026-10-21T06:28:48.957Z  

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
```

---

[View on LeetCode](https://leetcode.com/problems/rotate-list/)