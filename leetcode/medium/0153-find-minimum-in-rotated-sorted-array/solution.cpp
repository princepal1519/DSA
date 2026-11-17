class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        int rotated_min = INT_MAX;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[low] < nums[mid]) {
                rotated_min = min(rotated_min, nums[low]);
                low = mid + 1;
            } 
            else if (nums[mid] < nums[high]) {
                rotated_min = min(rotated_min, nums[mid]);
                high = mid - 1;
            } 
            else if (nums[low] <= nums[mid]) {
                rotated_min = min(rotated_min, nums[low]);
                low = mid + 1;
            } 
            else {
                rotated_min = min(rotated_min, nums[mid]);
                high=mid-1;
            }
        }
        return rotated_min;
    }
};