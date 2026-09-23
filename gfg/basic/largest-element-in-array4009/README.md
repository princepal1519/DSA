# Largest in Array

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given an array  **arr[].**  The task is to find the largest element and return it.

 **Examples:** 

```
Input: arr[] = [1, 8, 7, 56, 90]
Output: 90
Explanation: The largest element of the given array is 90.
```

```
Input: arr[] = [5, 5, 5, 5]
Output: 5
Explanation: The largest element of the given array is 5.
```

```
Input: arr[] = [10]
Output: 10
Explanation: There is only one element which is the largest.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-23T17:42:15.859Z  

```cpp
class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int large=-1;
        // intialize large as -1 temporary variable to store maximum value .
        for(int i=0;i<arr.size();i++){
            // it compared all elements fo array with large .
            if(arr[i]>large){
                large=arr[i];
            }
        }
        return large;
    }
};

```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/largest-element-in-array4009/1)