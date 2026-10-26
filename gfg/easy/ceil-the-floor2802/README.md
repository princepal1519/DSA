# Floor and Ceil in Unsorted

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an unsorted array  **arr[]**  of integers and an integer  **x**, find the floor and ceiling of  **x**  in  **arr[]**.

- Floor of x is the largest element which is smaller than or equal to x. Floor of x doesn’t exist if x is smaller than smallest element of arr[].
- Ceil of x is the smallest element which is greater than or equal to x. Ceil of x doesn’t exist if x is greater than greatest element of arr[].

Return an array of integers denoting the `[floor, ceil]`. Return `-1` for floor or ceiling if the floor or ceiling is not present.

 **Examples:** 

```
Input: x = 7, arr[] = [5, 6, 8, 9, 6, 5, 5, 6]
Output: 6, 8
Explanation: Floor of 7 is 6 and ceil of 7 is 8.

```

```
Input: x = 10, arr[] = [5, 6, 8, 8, 6, 5, 5, 6]
Output: 8, -1
Explanation: Floor of 10 is 8 but ceil of 10 is not possible.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-26T15:10:44.081Z  

```cpp
class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        sort(arr.begin(),arr.end());
        
        vector<int>output;
        
        
        int floor_el=INT_MIN;
        int ciel_el=INT_MAX;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=x){
                floor_el=max(floor_el,arr[i]);
            }
            if(arr[i]>=x){
                ciel_el=min(ciel_el,arr[i]);
            }
        }
        if(floor_el>INT_MIN && ciel_el<INT_MAX){
            output.push_back(floor_el);
            output.push_back(ciel_el);
            return output;
        }
        else if(floor_el==INT_MIN && ciel_el<INT_MAX ){
            
            output.push_back(-1);
            output.push_back(ciel_el);
            return output;
        }
        else if(floor_el>INT_MIN && ciel_el==INT_MAX ){
            output.push_back(floor_el);
            output.push_back(-1);
            return output;
        }
        
        return {-1,-1};
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/ceil-the-floor2802/1)