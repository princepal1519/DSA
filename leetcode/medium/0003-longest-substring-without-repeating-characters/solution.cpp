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