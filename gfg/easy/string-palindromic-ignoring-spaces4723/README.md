# Palindrome Sentence

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a single string  **s**, the task is to check if it is a  **palindrome sentence**  or not.
A palindrome sentence is a sequence of characters, such as word, phrase, or series of symbols that reads the  **same**  backward as forward after converting all  **uppercase** letters to **lowercase** and  **removing**  all  **non-alphanumeric**  characters (including spaces and punctuation).

 **Examples:** 

```
Input: s = "Too hot to hoot"
Output: true
Explanation: If we remove all non-alphanumeric characters and convert all uppercase letters to lowercase, string s will become "toohottohoot" which is a palindrome.
```

```
Input: s = "Abc 012..## 10cbA"
Output: true
Explanation: If we remove all non-alphanumeric characters and convert all uppercase letters to lowercase, string s will become "abc01210cba" which is a palindrome.
```

```
Input: s = "ABC $. def01ASDF"
Output: false
Explanation: The processed string becomes "abcdef01asdf", which is not a palindrome.
```

 **Constraints:** 
1 ≤ s.length() ≤ 106

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-14T13:01:42.138Z  

```cpp
class Solution {
	private:
	
	bool checkPalindrome_char(string s, int p, int q) {
		
		while (p <= q) {
			while (p<=q && !isalnum(s[p])) {
				p++;
			}
			while (p<=q && !isalnum(s[q])) {
				q--;
			}
			if (isalnum(s[p]) && isalnum(s[q])) {
				char ch1 = tolower(s[p]);
				char ch2 = tolower(s[q]);
				if (ch1 == ch2) {
					p++;
					q--;
				}
				else {
					return false;
				}
			}
			
		}
		return true;
	}
	
	public:
	bool isPalinSent(string &s) {
		int n = s.length();
		// code here
		int p = 0;
		int q = n - 1;
		
		if (checkPalindrome_char(s, p, q)) {
			return true;
		}
		return false;
	}
};

```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/string-palindromic-ignoring-spaces4723/1)