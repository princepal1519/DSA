class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if (n == 1)
            return 0;
        int low = 0;
        int high = n - 1;
        if (nums[low] > nums[low + 1])
            return low;
        if (nums[n - 1] > nums[n - 2])
            return n - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (mid > 0 && mid < n - 1 && nums[mid] > nums[mid - 1] &&
                nums[mid] > nums[mid + 1]) {
                return mid;
            } else if (mid > 0 && mid < n - 1 && nums[mid] > nums[mid - 1]) {
                low = mid + 1;
            } else if (mid > 0 && mid < n - 1 && nums[mid] > nums[mid + 1]) {
                high = mid - 1;
            }
            else{
                low=mid+1;
            }
        }
        return -1;
    }
};