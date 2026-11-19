# Check Same Strings

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given two strings  **s1**  and  **s2**, determine if they are  **exactly**  the same, considering case sensitivity.

 **Examples:** 

```
Input: s1 = "abc", s2 = "abc" 
Output: true
```

```
Input: s1 = " ", s2 = " "
Output: true
```

```
Input: s1 = "geeks", s2 = "Geeks"
Output: false
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-19T12:20:14.483Z  

```cpp
class Solution {
  public:
    bool areStringsSame(string &s1, string &s2) {
        int m=s1.size();
        int n=s2.size();
        
        // code here
        bool same=true;
        int i=0;
        int j=0;
        while(i<m && j<n){
            if(s1[i]!=s2[j]){
                return false;
            }
            i++;
            j++;
        }
        if(i<m || j<n)return false;
        return true;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/check-if-two-strings-are-same-or-not--155406/1)