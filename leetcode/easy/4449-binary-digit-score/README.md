# Q1. Binary Digit Score

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given two integers `a` and `b`.

Let `s1` and `s2` be the number of  **set bits**  in the binary representations of `a` and `b`, respectively.

The  **score**  of these integers is defined as follows:

- If s1 >= s2, the score is s1 * s2.
- Otherwise, the score is s2 / s1 using integer division.

Return an integer representing the score of `a` and `b`.

A  **set bit**  refers to a bit in the binary representation of a number that has a value of 1.

 

 **Example 1:** 

 **Input:**  a = 14, b = 6

 **Output:**  6

 **Explanation:** 

- The binary representation of a = 14 is "1110", so s1 = 3.
- The binary representation of b = 6 is "110", so s2 = 2.
- Since s1 > s2, the score of a and b is s1  *s2 = 3*  2 = 6.

 **Example 2:** 

 **Input:**  a = 5, b = 15

 **Output:**  2

 **Explanation:** 

- The binary representation of a = 5 is "101", so s1 = 2.
- The binary representation of b = 15 is "1111", so s2 = 4.
- Since s1 < s2, the score of a and b is s2 / s1 = 4 / 2 = 2.

 **Example 3:** 

 **Input:**  a = 10, b = 12

 **Output:**  4

 **Explanation:** 

- The binary representation of a = 10 is "1010", so s1 = 2.
- The binary representation of b = 12 is "1100", so s2 = 2.
- Since s1 == s2, the score of a and b is s1  *s2 = 2*  2 = 4.

 

 **Constraints:** 

- 1 <= a, b <= 100

## Solution

**Language:** C++  
**Runtime:** 3 ms (beats 7.69%)  
**Memory:** 9.3 MB (beats 3.85%)  
**Submitted:** 2026-10-25T03:15:11.621Z  

```cpp
class Solution {
public:
    int calculateScore(int a, int b) {
        string s1 = "";
        string s2 = "";
        int temp1 = a;
        int temp2 = b;
        while (temp1 != 0) {
            int digit = temp1 % 2;
            s1 += to_string(digit);
            temp1 = temp1 / 2;
        }
        while (temp2 != 0) {
            int digit = temp2 % 2;
            s2 += to_string(digit);
            temp2 = temp2 / 2;
        }
        int a1 = 0;
        int a2 = 0;

        for (int i = 0; i < s1.length(); i++) {
            if (s1[i] == '1') {
                a1++;
            }
        }

        for (int i = 0; i < s2.length(); i++) {
            if (s2[i] == '1') {
                a2++;
            }
        }
        if (a1 >= a2)
            return a1 * a2;

        return a2 / a1;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/binary-digit-score/)