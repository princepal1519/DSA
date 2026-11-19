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
