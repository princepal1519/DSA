class Solution {
  public:
    int arraySum(vector<int>& arr) {
        // intializing sum temporary variable as 0.
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
        }
        return sum;
    }
};