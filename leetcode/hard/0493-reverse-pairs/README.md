# Reverse Pairs

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)

## Problem

Given an integer array `nums`, return  *the number of  **reverse pairs**  in the array*.

A  **reverse pair**  is a pair `(i, j)` where:

- 0 <= i < j < nums.length and
- nums[i] > 2 * nums[j].

 

 **Example 1:** 

```
Input: nums = [1,3,2,3,1]
Output: 2
Explanation: The reverse pairs are:
(1, 4) --> nums[1] = 3, nums[4] = 1, 3 > 2 * 1
(3, 4) --> nums[3] = 3, nums[4] = 1, 3 > 2 * 1

```

 **Example 2:** 

```
Input: nums = [2,4,3,5,1]
Output: 3
Explanation: The reverse pairs are:
(1, 4) --> nums[1] = 4, nums[4] = 1, 4 > 2 * 1
(2, 4) --> nums[2] = 3, nums[4] = 1, 3 > 2 * 1
(3, 4) --> nums[3] = 5, nums[4] = 1, 5 > 2 * 1

```

 

 **Constraints:** 

- 1 <= nums.length <= 5 * 104
- -231 <= nums[i] <= 231 - 1

## Solution

**Language:** C++  
**Runtime:** 0 ms  
**Memory:** 8.4 MB  
**Submitted:** 2026-10-30T12:23:38.624Z  

```cpp
class Solution {
private:
    int pair_count(vector<int> nums, int low, int mid, int high) {
        int c = 0;
        int left = low;
        int right = mid + 1;
        for (int i = left; i <= mid; i++) {
            while(right<=high && nums[i]>2*nums[right]){
                right++;
            }
            c+=right-(mid+1);
        }

        return c;
    }
    void merge_sort(vector<int> nums, int low, int mid, int high) {
        vector<int> temp;
        int left = low;
        int right = mid + 1;
        while (left <= mid && right <= high) {
            if (nums[left] <= nums[right]) {
                temp.push_back(nums[left]);
                left++;
            } else {
                temp.push_back(nums[right]);
                right++;
            }
        }
        while (left <= mid) {
            temp.push_back(nums[left]);
            left++;
        }
        while (right <= high) {
            temp.push_back(nums[right]);
            right++;
        }
        
    }

    int merge(vector<int> nums, int low, int high) {
        int cnt = 0;
        if (low >= high)
            return cnt;
        int mid = (low + high) / 2;
        cnt += merge(nums, low, mid);
        cnt += merge(nums, mid + 1, high);
        cnt += pair_count(nums, low, mid, high);
        merge_sort(nums, low, mid, high);
        return cnt;
    }

public:
    int reversePairs(vector<int>& nums) {
        int low = 0;
        int n = nums.size();
        int high = n - 1;
        return merge(nums, low, high);
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/reverse-pairs/)