# Sum of Array

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given an integer array  **arr[]**, return the sum of all elements of arr.

 **Examples:** 

```
Input: arr[] = [1, 2, 3, 4]
Output: 10
Explanation: 1 + 2 + 3 + 4 = 10.

```

```
Input: arr[] = [1, 3, 3]
Output: 7
Explanation: 1 + 3 + 3 = 7.

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-26T14:06:37.592Z  

```cpp
class Solution {
  public:
    int arraySum(vector<int>& arr) {
        // intializing sum temporary variable as 0.
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
        }
        return sum;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/sum-all-array-elements/1)