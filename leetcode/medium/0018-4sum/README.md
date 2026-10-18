# 4Sum

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array `nums` of `n` integers, return  *an array of all the  **unique**  quadruplets*  `[nums[a], nums[b], nums[c], nums[d]]` such that:

- 0 <= a, b, c, d < n
- a, b, c, and d are distinct.
- nums[a] + nums[b] + nums[c] + nums[d] == target

You may return the answer in  **any order**.

 

 **Example 1:** 

```
Input: nums = [1,0,-1,0,-2,2], target = 0
Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]

```

 **Example 2:** 

```
Input: nums = [2,2,2,2,2], target = 8
Output: [[2,2,2,2]]

```

 

 **Constraints:** 

- 1 <= nums.length <= 200
- -109 <= nums[i] <= 109
- -109 <= target <= 109

## Solution

**Language:** C++  
**Runtime:** 24 ms (beats 34.42%)  
**Memory:** 17.5 MB (beats 57.63%)  
**Submitted:** 2026-10-18T18:03:41.314Z  

```cpp
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>four_sum;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1])continue;
            for(int j=i+1;j<nums.size();j++){
                if(j > i+1 && nums[j]==nums[j-1])continue;
                int k=j+1;
                int l=n-1;
                while(k<l){
                    long long sum=((long long)nums[i])+nums[j]+nums[k]+nums[l];
                    //  #why long long because here the edge case has some integer outside int range so to overcome we assign one integer variable as long long so other can easily be added .
                    if(sum<target)k++;
                    else if(sum>target)l--;
                    else {
                        vector<int>temp={nums[i],nums[j],nums[k],nums[l]};
                        four_sum.push_back(temp);
                        k++;
                        l--;
                        while(k<l && nums[k]==nums[k-1])k++;
                        while(k<l && nums[l]==nums[l+1])l--;
                    }
                }
            }
        }
        return four_sum;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/4sum/)