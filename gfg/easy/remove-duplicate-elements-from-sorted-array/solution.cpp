class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        vector<int>output;
        int n=arr.size();
        output.push_back(arr[0]);
        for(int i=1;i<n;i++){
            if(!output.empty() && output.back()!=arr[i]){
                output.push_back(arr[i]);
            }
            else{
                continue;
            }
        }
        return output;
    }
};