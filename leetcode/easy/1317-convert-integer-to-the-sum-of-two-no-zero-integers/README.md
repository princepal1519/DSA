# Convert Integer to the Sum of Two No-Zero Integers

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

**No-Zero integer**  is a positive integer that  **does not contain any `0`**  in its decimal representation.

Given an integer `n`, return  *a list of two integers*  `[a, b]`  *where* :

- a and b are No-Zero integers.
- a + b = n

The test cases are generated so that there is at least one valid solution. If there are many valid solutions, you can return any of them.

 

Original
C++
 **Example 1:** 

```
Input:int n = 2;Output: [1,1]
Explanation: Let a = 1 and b = 1.
Both a and b are no-zero integers, and a + b = 2 = n.

```

 **Example 2:** 

```
Input:int n = 11;Output: [2,9]
Explanation: Let a = 2 and b = 9.
Both a and b are no-zero integers, and a + b = 11 = n.
Note that there are other valid answers as [8, 3] that can be accepted.

```

 

 **Constraints:** 

- 2 <= n <= 104

## Solution

**Language:** C++  
**Runtime:** 0 ms  
**Memory:** 7.6 MB  
**Submitted:** 2026-11-10T11:26:38.944Z  

```cpp
class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
     int first = 1;
        int last = n - first;
        bool f = true;
        bool l = true;
        while (f && l) {
            int temp1 = first;
            int temp2 = last;
            while (temp1) {
                int digit = temp1 % 10;
                if (digit == 0) {
                    first++;
                    last--;
                    temp1 = first;
                    continue;
                }
                temp1 = temp1 / 10;
            }
            f=false;
            while (temp2) {
                int digit = temp2 % 10;
                if (digit == 0) {
                    last--;
                    first++;
                    temp2 = last;
                    continue;
                }
                temp2 = temp2 / 10;
            }
            l=false;
        }
        return {first, last};
        
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/convert-integer-to-the-sum-of-two-no-zero-integers/)