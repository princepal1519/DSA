# Reverse Array in Groups

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given an integer array  **arr[]** and an integer  **k**, reverse every consecutive group of k elements. If fewer than k elements remain at the end, reverse all of them.

 **Examples:** 

```
Input: arr[] = [1, 2, 3, 4, 5], k = 3
Output: [3, 2, 1, 5, 4]
Explanation: First group consists of elements 1, 2, 3. Second group consists of 4, 5.
```

```
Input: arr[] = [5, 6, 8, 9], k = 5
Output: [9, 8, 6, 5]
Explnation: Since k is greater than the number of remaining elements, the entire array is reversed.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-25T18:03:41.825Z  

```cpp
class Solution {
  public:
    void reverseInGroups(vector<int> &arr, int k) {
        // take start_index to reverse from that index to the index
        // where the sum is k of start_index come.
        int start_index=0;
        // intialize pointer to count k.
        int p=1;
        
        for(int i=0;i<arr.size();i++){
            if(p!=k){
                p++;
            }
            else if(p==k){
                reverse(arr.begin()+start_index,arr.begin()+i+1);
                start_index=i+1;
                p=1;
            }
        }
        if(start_index<arr.size()){
                reverse(arr.begin()+start_index,arr.end());
        }
    }
};

```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/reverse-array-in-groups0255/1)