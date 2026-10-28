# Rearrange Array Alternately

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array of non-negative integers. Your task is to rearrange the array elements alternatively i.e. first element should be the max value, the second should be the min value, the third should be the second max, the fourth should be the second min, and so on.

 **Note:** Modify the original array itself. You do not have to return anything.

 **Examples:** 

```
Input: arr[] = [1, 2, 3, 4, 5, 6]
Output: [6, 1, 5, 2, 4, 3]
Explanation: Max element = 6, min = 1, second max = 5, second min = 2, and so on... The modified array is: [6, 1, 5, 2, 4, 3]
```

```
Input: arr[]= [10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110]
Output: [110, 10, 100, 20, 90, 30, 80, 40, 70, 50, 60]
Explanation: Max element = 110, min = 10, second max = 100, second min = 20, and so on... Modified array is : [110, 10, 100, 20, 90, 30, 80, 40, 70, 50, 60]

```

```
Input: arr[]= [1]
Output: [1]
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-28T16:48:31.109Z  

```cpp
class Solution {
	public:
	void rearrange(vector<int>& arr) {
	    int n=arr.size();
		// Your code here
		sort(arr.begin(), arr.end());
		vector<int>max_arr;
		vector<int>min_arr;
		for (int i = 0; i<n/2; i++) {
			min_arr.push_back(arr[i]);
			max_arr.push_back(arr[i+n/2]);
		}
		if(n%2!=0){
		    max_arr.push_back(arr[n-1]);
		}
		
		reverse(max_arr.begin(),max_arr.end());
		int m=0;
		for(int i=0;i<n;i+=2){
		    arr[i]=max_arr[m];
		    m++;
		}
		int s=0;
		for(int i=1;i<n;i+=2){
		    arr[i]=min_arr[s];
		    s++;
		}
	}
};

```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/-rearrange-array-alternately-1587115620/1)