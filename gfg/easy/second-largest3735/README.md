# Second Largest

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an array of positive integers  **arr[]**, return the second largest element from the array. If the second largest element doesn't exist then return  **-1.** 

Note: The second largest element should not be equal to the largest element.

 **Examples:** 

```
Input: arr[] = [12, 35, 1, 10, 34, 1]
Output: 34
Explanation: The largest element of the array is 35 and the second largest element is 34.
```

```
Input: arr[] = [10, 5, 10]
Output: 5
Explanation: The largest element of the array is 10 and the second largest element is 5.
```

```
Input: arr[] = [10, 10, 10]
Output: -1
Explanation: The largest element of the array is 10 and the second largest element does not exist.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-18T17:01:15.826Z  

```cpp
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int second=-1;
        int first=arr[0];
        for(int i=1;i<arr.size();i++){
            if(arr[i]>first){
                second=first;
                first=arr[i];
            }
            else if(arr[i]<first && arr[i]>second){
                second=arr[i];
            }
        }
        return second;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/second-largest3735/1)