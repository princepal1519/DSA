class Solution {
private:
    long long pair_count(vector<int>& nums, int low, int mid, int high) {
        int c = 0;
        int left = low;
        int right = mid + 1;
        for (int i = left; i <= mid; i++) {
            while (right <= high && (long long)nums[i] > 2LL * nums[right]) {
                right++;
            }
            c += right - (mid + 1);
        }

        return c;
    }
    void merge_sort(vector<int>& nums, int low, int mid, int high) {
        vector<int> temp;
        int left = low;
        int right = mid + 1;
        while (left <= mid && right <= high) {
            if (nums[left] <= nums[right]) {
                temp.push_back(nums[left]);
                left++;
            } else {
                temp.push_back(nums[right]);
                right++;
            }
        }
        while (left <= mid) {
            temp.push_back(nums[left]);
            left++;
        }
        while (right <= high) {
            temp.push_back(nums[right]);
            right++;
        }
        for (int i = low; i <= high; i++) {
            nums[i] = temp[i - low];
        }
    }

    int merge(vector<int>& nums, int low, int high) {
        int cnt = 0;
        if (low >= high)
            return cnt;
        int mid = (low + high) / 2;
        cnt += merge(nums, low, mid);
        cnt += merge(nums, mid + 1, high);
        cnt += pair_count(nums, low, mid, high);
        merge_sort(nums, low, mid, high);
        return cnt;
    }

public:
    int reversePairs(vector<int>& nums) {
        int low = 0;
        int n = nums.size();
        int high = n - 1;
        return merge(nums, low, high);
    }
};