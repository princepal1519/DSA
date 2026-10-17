# Longest Substring Without Repeating Characters

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a string `s`, find the length of the  **longest**   **substring**  without duplicate characters.

 

 **Example 1:** 

```
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3. Note that "bca" and "cab" are also correct answers.

```

 **Example 2:** 

```
Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.

```

 **Example 3:** 

```
Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.

```

 

 **Constraints:** 

- 0 <= s.length <= 105
- s consists of English letters, digits, symbols and spaces.

## Solution

**Language:** C++  
**Runtime:** 0 ms  
**Memory:** 7.7 MB  
**Submitted:** 2026-10-17T14:04:03.887Z  

```cpp
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> mp;
        int long_sub = 0;
        int c = 0;
        for (int i = 0; i < s.length(); i++) {
            if (mp.find(s[i]) == mp.end()) {
                mp[s[i]] = i;
                c++;
                long_sub = max(long_sub, c);
            } else if (mp.find(s[i]) != mp.end()) {
                int j = mp[s[i]];
                if (s[j] == s[j + 1]) {
                    i = j + 1;
                    mp.erase(s[i - 1]);
                }
                 else {
                    i = mp[s[i]]+1;
                    mp.erase(s[i-1]);
                }
                mp[s[i]] = i;
                c = 1;
            }
        }
        return long_sub;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/longest-substring-without-repeating-characters/)