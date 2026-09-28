class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        
        int n=arr.size();
        // creating leader array which store all leader greater than right side of their index
        vector<int>leader;
        
        // taking last element as leader
        int maxi=arr[n-1];
        
        leader.push_back(maxi);
        
        for(int i=n-2;i>=0;i--){
            if(arr[i]>=maxi){
                leader.push_back(arr[i]);
                maxi=arr[i];
            }
        }
        // reverse because it is designed as required output.
        reverse(leader.begin(),leader.end());
        return leader;
       
    }
};