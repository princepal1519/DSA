class Solution {
public:
    vector<int> maxProductPair(vector<int>& nums, int target) {
        vector<int> arr;
        arr.push_back(-1);
        arr.push_back(-1);
        int product = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[j] > nums[i]) {
                    int sum = nums[i] + nums[j];
                    if (sum == target) {
                        int new_product = nums[i] * nums[j];
                        if (new_product > product) {
                            product = max(product, new_product);
                            arr[1] = i;
                            arr[0] = j;
                        }
                    }
                }
            }
        }
        return arr;
    }
};