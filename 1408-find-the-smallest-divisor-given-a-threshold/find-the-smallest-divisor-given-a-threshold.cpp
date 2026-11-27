class Solution {
private:
    bool div(vector<int>& nums,int threshold,int mid){
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+ceil((double)nums[i]/mid);
        }
        if(sum<=threshold){
            return true;
        }
        return false;

    }
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;

            if(div(nums,threshold,mid)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};