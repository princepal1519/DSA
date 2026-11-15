class Solution {
public:
    int countConsistent(vector<int>& nums) {
        int n = nums.size();
        int countConsistent_Subarrays = 0;
        for (int i = 0; i < n; i++) {
            int bitwise_and = nums[i];
            int minimum_sub_ele = nums[i];
            if (minimum_sub_ele == bitwise_and) {
                countConsistent_Subarrays++;
            }
            for (int j = i + 1; j < n; j++) {
                minimum_sub_ele = min(minimum_sub_ele,nums[j]);
                bitwise_and = bitwise_and & nums[j];
                if (minimum_sub_ele == bitwise_and) {
                    countConsistent_Subarrays++;
                }
            }
        }
        return countConsistent_Subarrays;
    }
};