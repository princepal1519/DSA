# Minimum Moves to Equal Array Elements

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given an integer array `nums` of size `n`.

Return the  **minimum**  number of moves required to make all array elements  **equal**.

In one move, you must increment `n - 1` elements of the array by 1.

 

 **Example 1:** 

```
Input: nums = [1,2,3]
Output: 3
Explanation: Only three moves are needed (remember each move increments two elements):
[1,2,3]  =>  [2,3,3]  =>  [3,4,3]  =>  [4,4,4]

```

 **Example 2:** 

```
Input: nums = [1,1,1]
Output: 0

```

 

 **Constraints:** 

- n == nums.length
- 1 <= nums.length <= 105
- -109 <= nums[i] <= 109
- The answer is guaranteed to fit in a 32-bit integer.

## Solution

**Language:** C++  
**Runtime:** 8 ms (beats 11.90%)  
**Memory:** 32.1 MB (beats 22.21%)  
**Submitted:** 2026-11-04T18:19:27.120Z  

```cpp
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int maximum = nums[0];
        int c = 0;
        for (int i = 0; i < nums.size(); i++) {
            c += (nums[i]-maximum);
        }

        return c;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/minimum-moves-to-equal-array-elements/)