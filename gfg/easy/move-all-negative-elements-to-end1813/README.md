# Move all Negatives to End

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an unsorted array  **arr[ ]**  having both negative and positive integers. Place all negative elements at the end of the array without changing the order of positive elements and negative elements.

 **Note** : Don't return any array, just in-place on the array.

 **Examples:** 

```
Input : arr[] = [1, -1, 3, 2, -7, -5, 11, 6 ]
Output : [1, 3, 2, 11, 6, -1, -7, -5]
Explanation: By doing operations we separated the integers without changing the order.
```

```
Input : arr[] = [-5, 7, -3, -4, 9, 10, -1, 11]
Output : [7, 9, 10, 11, -5, -3, -4, -1]

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-11T17:33:49.900Z  

```cpp
class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        vector<int>positive;
        vector<int>negative;
        for(int j=0;j<arr.size();j++){
            if(arr[j]<0){
                negative.push_back(arr[j]);
            }
            else if(arr[j]>=0){
                positive.push_back(arr[j]);
            }
        }
        int j=0;
        for(int i=0;i<positive.size();i++){
            arr[j]=positive[i];
            j++;
        }
        for(int i=0;i<negative.size();i++){
            arr[j]=negative[i];
            j++;
        }
        
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1)