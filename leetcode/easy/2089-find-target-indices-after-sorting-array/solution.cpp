class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int>target_index;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                target_index.push_back(i);
            }
        }
        return target_index;
    }
};