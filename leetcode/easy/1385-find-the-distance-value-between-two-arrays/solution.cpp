class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int cnt = 0;
        for (int i = 0; i < arr1.size(); i++) {
            int c = 1;
            for (int j = 0; j < arr2.size(); j++) {
                int temp = abs(arr1[i] - arr2[j]);
                if (temp <= d) {
                    c= 0;
                    break;
                }
            }
            cnt+=c;

        }
        return cnt;
    }
};