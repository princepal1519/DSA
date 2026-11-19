# Count Values With Equally Spaced Occurrences I

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given an integer array `nums`.

An integer `x` is called  **special**  if:

- x appears exactly three times in nums.
- All three occurrences of x are equally spaced in nums. In other words, if all occurrences of x are at indices i1 < i2 < i3, then i2 - i1 = i3 - i2.

Return the number of  **distinct**  special integers in `nums`.

 

Original
C++
 **Example 1:** 

 **Input:**  nums = [1,8,1,5,1,5,8,5]

 **Output:**  2

 **Explanation:** 

- 1 is special because it occurs exactly three times at equally spaced indices 0, 2, and 4.
- 5 is special because it occurs exactly three times at equally spaced indices 3, 5, and 7.
- 8 is not special because it occurs only twice.

Therefore, the answer is 2.

 **Example 2:** 

 **Input:**  nums = [8,8,8,8]

 **Output:**  0

 **Explanation:** 

8 is not special because it does not occur exactly three times. Therefore, the answer is 0.

 **Example 3:** 

 **Input:**  nums = [8,6,6,8,8]

 **Output:**  0

 **Explanation:** 

8 occurs at indices 0, 3, and 4, which are not equally spaced. 6 occurs only twice. Therefore, no integer is special.

 

 **Constraints:** 

- 3 <= nums.length <= 100
- 1 <= nums[i] <= 100

## Solution

**Language:** C++  
**Runtime:** 13 ms (beats 57.20%)  
**Memory:** 30.3 MB (beats 86.51%)  
**Submitted:** 2026-11-19T14:41:49.348Z  

```cpp
class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int count = 0;
        map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        vector<int> newarr;
        for (auto& n : mp) {
            if (n.second == 3) {
                newarr.push_back(n.first);
            }
        }
        vector<int> output;
        for (int i = 0; i < newarr.size(); i++) {
            int i1 = -1;
            int i2 = -1;
            int i3 = -1;

            for (int j = 0; j < nums.size(); j++) {
                if (nums[j] == newarr[i]) {
                    if (i1 == -1) {
                        i1 = j;
                    } else if (i2 == -1) {
                        i2 = j;
                    } else {
                        i3 = j;
                    }
                }
            }
            if ((i2 - i1) == (i3 - i2)) {
                output.push_back(newarr[i]);
            }
        }
        return output.size();
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/count-values-with-equally-spaced-occurrences-i/)