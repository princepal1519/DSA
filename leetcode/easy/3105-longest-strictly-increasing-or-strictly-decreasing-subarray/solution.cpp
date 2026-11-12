class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int strict_inc = 0;
        int strict_dec = 0;

        for (int i = 0; i < nums.size(); i++) {
            int c = 1;
            strict_inc = max(c, strict_inc);
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[j] > nums[j - 1]) {
                    c++;
                    strict_inc = max(c, strict_inc);
                } else {
                    break;
                }
            }
        }

        for (int i = 0; i < nums.size(); i++) {
            int c = 1;
            strict_dec = max(c, strict_dec);
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[j] < nums[j - 1]) {
                    c++;
                    strict_dec = max(c, strict_dec);
                } else {
                    break;
                }
            }
        }
        return max(strict_dec, strict_inc);
    }
};