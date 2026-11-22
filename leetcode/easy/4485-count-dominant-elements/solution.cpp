class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        int count = 0;
        int n = nums.size();

        if (n == 1)
            return 1;
        else if (n == 2) {
            if (nums[0] >= nums[1] && nums[1]>=nums[0])
                return 2;
            else {
                return 1;
            }
        }

        for (int i = 0; i < n; i++) {
            if (i == 0) {
                if (nums[0] >= nums[1]) {
                    count++;
                    continue;
                }
                else{
                    continue;
                }
            }
            if (i == n - 1) {
                if (nums[n - 1] >= nums[n - 2]) {
                    count++;
                    continue;
                }
                else{
                    continue;
                }
            }
            ;
            if (2*nums[i] >= nums[i-1]+nums[i+1]) {
                count++;
            }
        }
        return count;
    }
};