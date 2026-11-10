class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
     int first = 1;
        int last = n - first;
        bool f = true;
        bool l = true;
        while (f && l) {
            int temp1 = first;
            int temp2 = last;
            while (temp1) {
                int digit = temp1 % 10;
                if (digit == 0) {
                    first++;
                    last--;
                    temp1 = first;
                    continue;
                }
                temp1 = temp1 / 10;
            }
            f=false;
            while (temp2) {
                int digit = temp2 % 10;
                if (digit == 0) {
                    last--;
                    first++;
                    temp2 = last;
                    continue;
                }
                temp2 = temp2 / 10;
            }
            l=false;
        }
        return {first, last};
        
    }
};