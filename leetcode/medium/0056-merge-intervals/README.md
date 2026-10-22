# Merge Intervals

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array of `intervals` where `intervals[i] = [starti, endi]`, merge all overlapping intervals, and return  *an array of the non-overlapping intervals that cover all the intervals in the input*.

 

 **Example 1:** 

```
Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].

```

 **Example 2:** 

```
Input: intervals = [[1,4],[4,5]]
Output: [[1,5]]
Explanation: Intervals [1,4] and [4,5] are considered overlapping.

```

 **Example 3:** 

```
Input: intervals = [[4,7],[1,4]]
Output: [[1,7]]
Explanation: Intervals [1,4] and [4,7] are considered overlapping.

```

 

 **Constraints:** 

- 1 <= intervals.length <= 104
- intervals[i].length == 2
- 0 <= starti <= endi <= 104

## Solution

**Language:** C++  
**Runtime:** 5 ms (beats 55.05%)  
**Memory:** 23.7 MB (beats 94.03%)  
**Submitted:** 2026-10-22T13:10:00.287Z  

```cpp
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> answer;
        for (int i = 0; i < n; i++) {
            int start = intervals[i][0];
            int end = intervals[i][1];
            if(!answer.empty() && end<=answer.back()[1])continue;

            for (int j = i+1; j < n; j++) {
                if(intervals[j][0]<=end){
                    end=max(intervals[j][1],end);
                }
                else{
                    break;
                }
            }
            answer.push_back({start,end});
        }

        return answer;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/merge-intervals/)