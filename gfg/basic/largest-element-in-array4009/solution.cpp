class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int large=-1;
        // intialize large as -1 temporary variable to store maximum value .
        for(int i=0;i<arr.size();i++){
            // it compared all elements fo array with large .
            if(arr[i]>large){
                large=arr[i];
            }
        }
        return large;
    }
};
