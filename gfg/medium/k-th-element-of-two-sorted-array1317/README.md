# K-th of Two Sorted Arrays

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given two sorted arrays  **a[]** and  **b[]**  and an element  **k**, find the element that would be at the  **kth**  position of the combined sorted array.

 **Examples :** 

```
Input: a[] = [2, 3, 6, 7, 9], b[] = [1, 4, 8, 10], k = 5
Output: 6
Explanation: The final combined sorted array would be [1, 2, 3, 4, 6, 7, 8, 9, 10]. The 5th element of this array is 6.

```

```
Input: a[] = [1, 4, 8, 10, 12], b[] = [5, 7, 11, 15, 17], k = 6
Output: 10
Explanation: Combined sorted array is [1, 4, 5, 7, 8, 10, 11, 12, 15, 17]. The 6th element of this array is 10.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-22T14:32:36.954Z  

```cpp
class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        // code here
        vector<int>arr;
        for(int i=0;i<a.size();i++){
            arr.push_back(a[i]);
        }
        for(int i=0;i<b.size();i++){
            arr.push_back(b[i]);
        }
        sort(arr.begin(),arr.end());
        
        int n=arr[k-1];
        return n;
        
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/k-th-element-of-two-sorted-array1317/1)