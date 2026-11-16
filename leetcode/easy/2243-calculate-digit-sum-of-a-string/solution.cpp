class Solution {
public:
    string digitSum(string s, int k) {
        int n = s.length();
        bool round = true;
        string str_return = "";
        if(s.length()<=k){
            return s;
        }
        while (round) {
            int i = 0;
            vector<string> string_group;
            while (i < n) {
                int c = 0;
                string str = "";
                while (c < k && i < n) {
                    str = str + s[i];
                    i++;
                    c++;
                }
                string_group.push_back(str);
            }
            string string_sum = "";
            for (int j = 0; j < string_group.size(); j++) {
                int one_str = string_group[j].length();
                int s1 = 0;
                for (int p = 0; p < one_str; p++) {
                    s1 += (string_group[j][p]) - '0';
                }
                string_sum += to_string(s1);
            }
            if (string_sum.length() <= k) {
                str_return = string_sum;
                round = false;
            }
            s = string_sum;
            n = s.length();
        }
        return str_return;
    }
};