# Toggle Case

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a string  **s**,  **convert** the characters of the string into the  **opposite case**, i.e., if a character is lowercase, then convert it into uppercase and vice versa. 

 **Examples:** 

```
Input: s = "geeksForgEeks"
Output: GEEKSfORGeEKS
Explanation: The cases of the characters in "geeksForgEeks" are flipped.
```

```
Input: s = "helloEveryOne"
Output: HELLOeVERYoNE
Explanation: The cases of the characters in "helloEveryOne" are flipped.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-20T15:16:39.965Z  

```cpp
class Solution {
  public:
    string toggleCase(string &s) {
        // code here
        for(int i=0;i<s.length();i++){
            if(islower(s[i])){
                s[i]=toupper(s[i]);
            }
            else{
                s[i]=tolower(s[i]);
            }
        }
        return s;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/toggle-case/1)