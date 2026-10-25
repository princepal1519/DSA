class Solution {
public:
    int calculateScore(int a, int b) {
        string s1 = "";
        string s2 = "";
        int temp1 = a;
        int temp2 = b;
        while (temp1 != 0) {
            int digit = temp1 % 2;
            s1 += to_string(digit);
            temp1 = temp1 / 2;
        }
        while (temp2 != 0) {
            int digit = temp2 % 2;
            s2 += to_string(digit);
            temp2 = temp2 / 2;
        }
        int a1 = 0;
        int a2 = 0;

        for (int i = 0; i < s1.length(); i++) {
            if (s1[i] == '1') {
                a1++;
            }
        }

        for (int i = 0; i < s2.length(); i++) {
            if (s2[i] == '1') {
                a2++;
            }
        }
        if (a1 >= a2)
            return a1 * a2;

        return a2 / a1;
    }
};