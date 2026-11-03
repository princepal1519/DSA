class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int maximum= nums[n-1];
        int c=0;
        for (int i =0; i < nums.size(); i++) {
           c+=(maximum-nums[i]);
        }

        return c;
    }
};