# 3Sum Closest

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given an integer array `nums` of length `n` and an integer `target`.

Find three integers at  **distinct indices**  in `nums` such that the sum is  **closest**  to `target`.

Return the sum of the three integers.

You may assume that each input would have  **exactly**  one solution.

 

 **Example 1:** 

```
Input: nums = [-1,2,1,-4], target = 1
Output: 2
Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).

```

 **Example 2:** 

```
Input: nums = [0,0,0], target = 1
Output: 0
Explanation: The sum that is closest to the target is 0. (0 + 0 + 0 = 0).

```

 

 **Constraints:** 

- 3 <= nums.length <= 500
- -1000 <= nums[i] <= 1000
- -104 <= target <= 104

## Solution

**Language:** C++  
**Runtime:** 17 ms (beats 16.83%)  
**Memory:** 14 MB (beats 82.21%)  
**Submitted:** 2026-10-29T01:59:58.668Z  

```cpp
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int c = 0;
        int closest = 0;
        int closest_sum = 0;

        int temp = nums[0] + nums[1] + nums[n-1];
        closest = abs(target - temp);
        closest_sum = temp;

        for (int i = 0; i < n - 2; i++) {
            int j = i + 1;
            int k = n - 1;

            while (j < k) {
                int new_sum = nums[i] + nums[j] + nums[k];
                int new_closest = abs(target - new_sum);

                if (new_closest < closest) {
                    closest_sum = new_sum;
                    closest = new_closest;
                }
                if (new_sum == target)
                    return target;
                if (new_sum <= target) {
                    j++;
                }
                else {
                    k--;
                }
            }
        }
        return closest_sum;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/3sum-closest/)