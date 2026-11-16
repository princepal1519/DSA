# Generating All Subarrays

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an array  **arr[]**, generate and return all possible subarrays. The subarrays must be returned in the following order:
      1. Subarrays starting from the first element, followed by subarrays starting from the second element, and so on.
      2. For each starting index, subarrays should be in increasing length.

 **Examples** : 

```
Input: arr[] = [1, 2, 3]
Output: [[1], [1, 2], [1, 2, 3], [2], [2, 3], [3]]
Explanation: Starting with the first element, we generate subarrays [1], [1, 2], and [1, 2, 3]. Then, starting from the second element, we get [2] and [2, 3].  Finally, starting from the third element, we only get [3].
```

```
Input: arr[] = [1, 2]
Output: [[1], [1, 2], [2]]
Explanation: Starting with the first element, we generate subarrays [1] and [1, 2]. Then, starting from the second element, we get [2].
```

```
Input: arr[] = [1, 1]
Output: [[1], [1, 1], [1]]
Explanation: Starting with the first element, we generate subarrays [1] and [1, 1] (including both elements). Starting from the second element, we only get the subarray [1].
```

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-16T12:20:53.279Z  

```java
class Solution {
    public List<List<Integer>> getSubArrays(int[] arr) {
        // code here
        List<List<Integer>>subarrays = new ArrayList<>();
        
        int n=arr.length;
        if(n==0){
            return subarrays;
        }
        
        
        for(int i=0;i<n;i++){
            List<Integer>v=new ArrayList<>();
            for(int j=i;j<n;j++){
                v.add(arr[j]);
                subarrays.add(new ArrayList<>(v));
            }
        }
        
        return subarrays;
    }
}
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/generating-all-subarrays/1)