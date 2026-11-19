# Palindrome String

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given a string  **s**, find if it is a palindrome. A string is considered a palindrome if it reads the same forwards and backwards.

 **Examples :** 

```
Input: s = "abba"
Output: true
Explanation: "abba" reads the same forwards and backwards, so it is a palindrome.
```

```
Input: s = "abc" 
Output: false
Explanation: "abc" does not read the same forwards and backwards, so it is not a palindrome.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-19T12:37:45.173Z  

```cpp
class Solution {
	private:
	bool check_palindrome(string &s, int p, int q) {
		while (p<q) {
			if (s[p] != s[q]) {
				return false;
			}
			p++;
			q--;
		}
		return true;
	}
	

public:
bool isPalindrome(string& s) {
	// code here
	int n = s.length();
	int p = 0;
	int q = n - 1;
	return check_palindrome(s, p, q);
}
};

```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/palindrome-string0817/1)