class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int>output;
        for(int i=0;i<nums.size()-1;i+=2){
            int freq=nums[i];
            int val=nums[i+1];
            while(freq>0){
                output.push_back(val);
                freq--;
            }
        }
        return output;
        
    }
};