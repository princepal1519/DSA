class Solution {
public:
    int countPrimes(int n) {
        int prime = 0;
        int c = 0;
        for (int i = 2; i < n; i++) {
            if (i % 2 == 0) {
                c++;
            }
        }
        if(c>0){
            return c;
        }
        return prime;
    }
};