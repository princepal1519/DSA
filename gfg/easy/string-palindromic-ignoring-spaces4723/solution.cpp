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
