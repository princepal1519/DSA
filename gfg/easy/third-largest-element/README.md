# Third Largest

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an array,  **arr[]**  of positive integers. Find the third largest element in it. Return  **-1**  if the third largest element is not found.

 **Examples:** 

```
Input: arr[] = [2, 4, 1, 3, 5]
Output: 3
Explanation: The third largest element in the array [2, 4, 1, 3, 5] is 3.
```

```
Input: arr[] = [10, 2]
Output: -1
Explanation: There are less than three elements in the array, so the third largest element cannot be determined.

```

```
Input: arr[] = [5, 5, 5]
Output: 5
Explanation: In the array [5, 5, 5], the third largest element can be considered 5, as there are no other distinct elements.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-18T19:42:08.530Z  

```cpp
class Solution {
  public:
    int thirdLargest(vector<int> &arr) {
        int f_max=-1;
        int s_max=-1;
        int t_max=-1;
        if(arr.size()==2)return -1;
        if(arr[0]>=arr[1]){
            f_max=arr[0];
            s_max=arr[1];
        }
        else{
            f_max=arr[1];
            s_max=arr[0];
        }
        
        for(int i=2;i<arr.size();i++){
            if(arr[i]>=f_max ){
                t_max=s_max;
                s_max=f_max;
                f_max=arr[i];
            }
            else if(arr[i]>=s_max && arr[i]<f_max){
                t_max=s_max;
                s_max=arr[i];
            }
            else if(arr[i]<f_max && arr[i]<s_max && arr[i]>t_max){
                t_max=arr[i];
            }
        }
        return t_max;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/third-largest-element/1)