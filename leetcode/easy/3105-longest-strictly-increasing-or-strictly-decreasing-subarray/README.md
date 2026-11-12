# Longest Strictly Increasing or Strictly Decreasing Subarray

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given an array of integers `nums`. Return  *the length of the  **longest**  subarray of* `nums` *which is either  **strictly increasing**  or  **strictly decreasing***.

 

Original
C++
 **Example 1:** 

 **Input:**  nums = [1,4,3,3,2]

 **Output:**  2

 **Explanation:** 

The strictly increasing subarrays of `nums` are `[1]`, `[2]`, `[3]`, `[3]`, `[4]`, and `[1,4]`.

The strictly decreasing subarrays of `nums` are `[1]`, `[2]`, `[3]`, `[3]`, `[4]`, `[3,2]`, and `[4,3]`.

Hence, we return `2`.

 **Example 2:** 

 **Input:**  nums = [3,3,3,3]

 **Output:**  1

 **Explanation:** 

The strictly increasing subarrays of `nums` are `[3]`, `[3]`, `[3]`, and `[3]`.

The strictly decreasing subarrays of `nums` are `[3]`, `[3]`, `[3]`, and `[3]`.

Hence, we return `1`.

 **Example 3:** 

 **Input:**  nums = [3,2,1]

 **Output:**  3

 **Explanation:** 

The strictly increasing subarrays of `nums` are `[3]`, `[2]`, and `[1]`.

The strictly decreasing subarrays of `nums` are `[3]`, `[2]`, `[1]`, `[3,2]`, `[2,1]`, and `[3,2,1]`.

Hence, we return `3`.

 

 **Constraints:** 

- 1 <= nums.length <= 50
- 1 <= nums[i] <= 50

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 27.8 MB (beats 75.37%)  
**Submitted:** 2026-11-12T09:58:28.006Z  

```cpp
class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int strict_inc = 0;
        int strict_dec = 0;

        for (int i = 0; i < nums.size(); i++) {
            int c = 1;
            strict_inc = max(c, strict_inc);
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[j] > nums[j - 1]) {
                    c++;
                    strict_inc = max(c, strict_inc);
                } else {
                    break;
                }
            }
        }

        for (int i = 0; i < nums.size(); i++) {
            int c = 1;
            strict_dec = max(c, strict_dec);
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[j] < nums[j - 1]) {
                    c++;
                    strict_dec = max(c, strict_dec);
                } else {
                    break;
                }
            }
        }
        return max(strict_dec, strict_inc);
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/longest-strictly-increasing-or-strictly-decreasing-subarray/)