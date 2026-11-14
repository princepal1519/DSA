class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();
        int min_sum = INT_MAX;

        for (int i = 0; i < n; i++) {
            int sum = nums[i];
            int c = 1;
            if (sum > 0 && (c >= l && c <= r)) {
                min_sum = min(sum, min_sum);
            }
            for (int j = i + 1; j < n; j++) {
                c++;
                sum = sum + nums[j];
                if (c < l) {
                    continue;
                } else if (c >= l && c <= r) {
                    if (sum > 0) {
                        min_sum = min(sum, min_sum);
                    }
                } else {
                    break;
                }
            }
        }
        if (min_sum ==INT_MAX)
            return -1;
        return min_sum;
    }
};