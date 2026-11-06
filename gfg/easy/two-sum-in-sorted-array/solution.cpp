class Solution {
  public:
    vector<int> twoSum(vector<int>& arr, int target) {
        // code here
        map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]=i;
        }
        
        for(int i=0;i<arr.size();i++){
            int need=target-arr[i];
            if(mp.find(need)!=mp.end()){
                return {i+1,mp[need]+1};
                break;
            }
        }
        return {-1,-1};
    }
};