class Solution {
public:
    int heightChecker(vector<int>& heights) {
        // create an output of same size as heights array
        vector<int> output(heights);
        // sort all the elements in heights
        sort(heights.begin(), heights.end());
        int count = 0;
        // comparing all element with output array if not match increase count by 1.
        for (int i = 0; i < heights.size(); i++) {
            if (heights[i] != output[i]) {
                count++;
            }
        }
        return count;
    }
};