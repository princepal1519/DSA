class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int c = 0;
        int closest = 0;
        int closest_sum = 0;

        int temp = nums[0] + nums[1] + nums[n-1];
        closest = abs(target - temp);
        closest_sum = temp;

        for (int i = 0; i < n - 2; i++) {
            int j = i + 1;
            int k = n - 1;

            while (j < k) {
                int new_sum = nums[i] + nums[j] + nums[k];
                int new_closest = abs(target - new_sum);

                if (new_closest < closest) {
                    closest_sum = new_sum;
                    closest = new_closest;
                }
                if (new_sum == target)
                    return target;
                if (new_sum <= target) {
                    j++;
                }
                else {
                    k--;
                }
            }
        }
        return closest_sum;
    }
};