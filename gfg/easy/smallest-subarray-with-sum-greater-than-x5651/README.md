# Smallest Subarray Sum Greater Than x

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a number  **x** and an array of integers  **arr**, find the smallest subarray with sum strictly greater than the given value. If such a subarray do not exist return 0 in that case.

 **Examples:** 

```
Input: x = 51, arr[] = [1, 4, 45, 6, 0, 19]
Output: 3
Explanation: Minimum length subarray is [4, 45, 6]
```

```
Input: x = 100, arr[] = [1, 10, 5, 2, 7]
Output: 0
Explanation: No subarray exist
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-07T13:42:01.428Z  

```cpp
class Solution {
	public:
	int smallestSubWithSum(int x, vector<int>& arr) {
		int min_sub_arr = INT_MAX;
		int sum = 0;
		int j = 0 ;
		for (int i = 0 ; i < arr.size () ; i++) {
			sum += arr[i];
			if (sum>x) {
				while (sum>x) {
					min_sub_arr = min(min_sub_arr, i - j + 1);
					sum -= arr[j];
					j++;
				}
			}
		}
		if(min_sub_arr==INT_MAX)return 0;
		return min_sub_arr;
	}
};

```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/smallest-subarray-with-sum-greater-than-x5651/1)