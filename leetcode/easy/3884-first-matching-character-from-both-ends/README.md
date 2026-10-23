# First Matching Character From Both Ends

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given a string `s` of length `n` consisting of lowercase English letters.

Return the smallest index `i` such that `s[i] == s[n - i - 1]`.

If no such index exists, return -1.

 

 **Example 1:** 

 **Input:**  s = "abcacbd"

 **Output:**  1

 **Explanation:** 

At index `i = 1`, `s[1]` and `s[5]` are both `'b'`.

No smaller index satisfies the condition, so the answer is 1.

 **Example 2:** 

 **Input:**  s = "abc"

 **Output:**  1

 **Explanation:** 

​​​​​​​At index `i = 1`, the two compared positions coincide, so both characters are `'b'`.

No smaller index satisfies the condition, so the answer is 1.

 **Example 3:** 

 **Input:**  s = "abcdab"

 **Output:**  -1

 **Explanation:** 

​​​​​​​For every index `i`, the characters at positions `i` and `n - i - 1` are different.

Therefore, no valid index exists, so the answer is -1.

 

 **Constraints:** 

- 1 <= n == s.length <= 100
- s consists of lowercase English letters.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 9 MB (beats 3.65%)  
**Submitted:** 2026-10-23T15:50:21.032Z  

```cpp
class Solution {
public:
    int firstMatchingIndex(string s) {
        int n=s.length();
        for(int i=0;i<=n/2;i++){
            if(s[i]==s[n-i-1]){
                return i;
            }
        }
        return -1;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/first-matching-character-from-both-ends/)