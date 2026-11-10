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
Input: n = 2
Output: [1,1]
Explanation: Let a = 1 and b = 1.
Both a and b are no-zero integers, and a + b = 2 = n.

```

 **Example 2:** 

```
Input: n = 11
Output: [2,9]
Explanation: Let a = 2 and b = 9.
Both a and b are no-zero integers, and a + b = 11 = n.
Note that there are other valid answers as [8, 3] that can be accepted.

```

 

 **Constraints:** 

- 2 <= n <= 104

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 8.1 MB (beats 83.19%)  
**Submitted:** 2026-11-10T12:03:37.746Z  

```cpp
class Solution {
private:
    bool iszero(int x){
        int temp=x;
        while(temp>0){
            int digit=temp%10;
            if(digit==0){
                return true;
            }
            temp=temp/10;
        }
        return false;
    }
public:
    vector<int> getNoZeroIntegers(int n) {
        int first=n/2;
        int last=n-first;

        while(iszero(first) || iszero(last)){
            first--;
            last++;
        }  
        return {first,last};    
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/convert-integer-to-the-sum-of-two-no-zero-integers/)