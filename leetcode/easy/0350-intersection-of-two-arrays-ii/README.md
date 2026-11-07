# Intersection of Two Arrays II

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given two integer arrays `nums1` and `nums2`, return  *an array of their intersection*. Each element in the result must appear as many times as it shows in both arrays and you may return the result in  **any order**.

 

 **Example 1:** 

```
Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2,2]

```

 **Example 2:** 

```
Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [4,9]
Explanation: [9,4] is also accepted.

```

 

 **Constraints:** 

- 1 <= nums1.length, nums2.length <= 1000
- 0 <= nums1[i], nums2[i] <= 1000

 

 **Follow up:** 

- What if the given array is already sorted? How would you optimize your algorithm?
- What if nums1's size is small compared to nums2's size? Which algorithm is better?
- What if elements of nums2 are stored on disk, and the memory is limited such that you cannot load all elements into the memory at once?

## Solution

**Language:** C++  
**Runtime:** 4 ms (beats 14.71%)  
**Memory:** 14.5 MB (beats 58.00%)  
**Submitted:** 2026-11-07T12:27:49.021Z  

```cpp
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> mp;
        for (int i = 0; i < nums2.size(); i++) {
            mp[nums2[i]]++;
        }
        vector<int> output;
        for (int i = 0; i < nums1.size(); i++) {
            if (mp.find(nums1[i]) != mp.end() && mp[nums1[i]]>0 ) {
                output.push_back(nums1[i]);
                mp[nums1[i]]--;
            }
        }
        return output;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/intersection-of-two-arrays-ii/)