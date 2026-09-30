# Count Smaller in Array

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given an unsorted array  **arr[]**. Find the count of elements less than or equal to the given element  **x**.

 **Examples:** 

```
Input: x = 9, arr[] = [10, 1, 2, 8, 4, 5] 
Output: 5
Explanation: The 5 elements are 1, 2, 8, 4 and 5.

```

```
Input: x = 2, arr[] = [1, 2, 2, 5, 7, 2, 9] 
Output: 4 
Explanation: The 4 elements are 1, 2, 2 and 2.
```

 **Constraints:** 
1 <= arr.size() <= 105
1 <= ai <= 105
0 <= x <= 105

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-30T16:24:33.103Z  

```cpp
class Solution {
  public:
    int countOfElements(int x, vector<int> &arr) {
        int count=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=x){
                count++;
            }
            
        }
        return count;
        
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/count-of-smaller-elements5947/1)