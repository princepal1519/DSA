class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int minimum = INT_MAX;

        int n = nums.size();
        for (int i = 0; i < n - 1; i += 2) {
            string temp = to_string(nums[i]) + to_string(nums[i + 1]);
            int str_int = stoi(temp);

            minimum=min(minimum,str_int);
        }
   
        return minimum;
    }
};