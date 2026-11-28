class Solution {
private:
    int countDays(vector<int>& weights,  int mid) {
        int countDay = 1;
        int sum = 0;

        for (int i = 0; i < weights.size(); i++) {
            sum += weights[i];
            if (sum > mid) {
                sum = weights[i];
                countDay++;
            }
        }
        return countDay;
    }

public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);
        

        while (low <= high) {
            int mid = low + (high - low) / 2;

           int cnt= countDays(weights,  mid);

            if (cnt<=days) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};