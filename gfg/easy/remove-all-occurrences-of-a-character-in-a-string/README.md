# Remove Occurrences in String

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a string  **s**  and a character  **c**. The task is to remove all the occurrences of the character in the string.

 **Examples:** 

```
Input: s = "geeksforgeeks", c = 'e'
Output: s = "gksforgks"
```

```
Input: s = "geeksforgeeks", c = 'g'
Output: s = "eeksforeeks"
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-20T23:46:11.375Z  

```cpp
class Solution {
  public:
    void removeCharacter(string &s, char c) {
        // code here
        string str="";
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]!=c){
                str+=char(s[i]);
            }
        }
       s=str;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/remove-all-occurrences-of-a-character-in-a-string/1)