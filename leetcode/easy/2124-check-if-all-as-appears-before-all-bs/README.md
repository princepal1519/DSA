# Check if All A's Appears Before All B's

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a string `s` consisting of  **only**  the characters `'a'` and `'b'`, return `true`  *if  **every*** `'a'`  *appears before  **every*** `'b'` *in the string*. Otherwise, return `false`.

 

Original
C++
 **Example 1:** 

```
Input: s = "aaabbb"
Output: true
Explanation:
The 'a's are at indices 0, 1, and 2, while the 'b's are at indices 3, 4, and 5.
Hence, every 'a' appears before every 'b' and we return true.

```

 **Example 2:** 

```
Input: s = "abab"
Output: false
Explanation:
There is an 'a' at index 2 and a 'b' at index 1.
Hence, not every 'a' appears before every 'b' and we return false.

```

 **Example 3:** 

```
Input: s = "bbb"
Output: true
Explanation:
There are no 'a's, hence, every 'a' appears before every 'b' and we return true.

```

 

 **Constraints:** 

- 1 <= s.length <= 100
- s[i] is either 'a' or 'b'.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 8.1 MB (beats 96.90%)  
**Submitted:** 2026-11-22T01:58:07.787Z  

```cpp
class Solution {
public:
    bool checkString(string s) {
        int c_a=0;
        int c_b=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='a' && c_b==1)return false;            
            if(s[i]=='a'){
                c_a=1;
            }
            else if(s[i]=='b'){
                c_b=1;
            }
        }
        return true;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/check-if-all-as-appears-before-all-bs/)