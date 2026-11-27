# Find the Smallest Divisor Given a Threshold

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array of integers `nums` and an integer `threshold`, we will choose a positive integer `divisor`, divide all the array by it, and sum the division's result. Find the  **smallest**  `divisor` such that the result mentioned above is less than or equal to `threshold`.

Each result of the division is rounded to the nearest integer greater than or equal to that element. (For example: `7/3 = 3` and `10/2 = 5`).

The test cases are generated so that there will be an answer.

 

Original
C++
 **Example 1:** 

```
Input: nums = [1,2,5,9], threshold = 6
Output: 5
Explanation: We can get a sum to 17 (1+2+5+9) if the divisor is 1. 
If the divisor is 4 we can get a sum of 7 (1+1+2+3) and if the divisor is 5 the sum will be 5 (1+1+1+2). 

```

 **Example 2:** 

```
Input: nums = [44,22,33,11,1], threshold = 5
Output: 44

```

 

 **Constraints:** 

- 1 <= nums.length <= 5 * 104
- 1 <= nums[i] <= 106
- nums.length <= threshold <= 106

## Solution

**Language:** C++  
**Runtime:** 20 ms (beats 6.38%)  
**Memory:** 26.2 MB (beats 8.51%)  
**Submitted:** 2026-11-27T01:33:24.089Z  

```cpp
class Solution {
private:
    bool div(vector<int>& nums,int threshold,int mid){
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+ceil((double)nums[i]/mid);
        }
        if(sum<=threshold){
            return true;
        }
        return false;

    }
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;

            if(div(nums,threshold,mid)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/)