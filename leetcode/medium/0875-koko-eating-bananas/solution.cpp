class Solution {
private:
    long long funct(vector<int>& piles, int mid) {
        long long required_time = 0;
        for (int i = 0; i < piles.size(); i++) {
            required_time += ceil((double)piles[i] / mid);
        }
        return required_time;
    }

public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int ans = 0;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long req = funct(piles, mid);

            if (req <= h) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};