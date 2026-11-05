# Max Sum Subarray of Size K

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an array of integers **arr[]**  and a number **k**. Return the maximum sum of a subarray of size k.

 **Note:**  A subarray is a contiguous part of any given array.

 **Examples:** 

```
Input: arr[] = [100, 200, 300, 400], k = 2
Output: 700
Explanation: arr2 + arr3 = 700, which is maximum.
```

```
Input: arr[] = [1, 4, 2, 10, 23, 3, 1, 0, 20], k = 4
Output: 39
Explanation: arr1 + arr2 + arr3 + arr4 = 39, which is maximum.

```

```
Input: arr[] = [100, 200, 300, 400], k = 1
Output: 400
Explanation: arr3 = 400, which is maximum.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-05T10:43:40.958Z  

```cpp
class Solution {
	public:
	int maxSubarraySum(vector<int>& arr, int k) {
		int n = arr.size();
	    if(k>n)return -1;
		// code here
		int s = 0;
		int l = k - 1;
		int max_sum = INT_MIN;
		int sum = 0;
		for (int i = 0; i <= l; i++) {
			sum += arr[i];
		}
		max_sum=max(sum,max_sum);
		int c = k;
		while (c<n) {
			sum = sum+ arr[c]-arr[c - k];
			max_sum = max(max_sum, sum);
			c++;
		}
		return max_sum;
	}
};

```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1)