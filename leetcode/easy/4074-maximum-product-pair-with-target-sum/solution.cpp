class Solution {
public:
    vector<int> maxProductPair(vector<int>& nums, int target) {
        vector<int> arr;
        arr.push_back(-1);
        arr.push_back(-1);
        int product = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums.size(); j++) {
                if(i==j)continue;
                int sum = nums[i] + nums[j];
                if (sum == target && nums[i] > nums[j]) {
                    int new_product = nums[i] * nums[j];
                    if (new_product > product) {
                        product = max(product, new_product);
                        arr[0] = i;
                        arr[1] = j;
                    }
                }
            }
        }
        return arr;
    }
};