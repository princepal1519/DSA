class Solution {
private:
    bool check_bucket(vector<int>& bloomDay, int m, int k, int mid) {
        int cnt = 0;
        int bucket = 0;

        for (int i = 0; i < bloomDay.size(); i++) {
            if (bloomDay[i] <= mid) {
                cnt++;
            } else {
                bucket += (cnt / k);
                cnt = 0;
            }
        }
        bucket += (cnt / k);
        if (bucket >= m) {
            return true;
        }
        return false;
    }

public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());
        int ans = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (check_bucket(bloomDay, m, k, mid)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};