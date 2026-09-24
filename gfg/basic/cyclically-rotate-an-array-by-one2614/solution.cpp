class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
        int n=arr.size();
        // storing last element in temp variable.
        int temp=arr[n-1];
        for(int i=n-2;i>=0;i--){
            arr[i+1]=arr[i];
        }
        // filling first element in arr with temp.
        arr[0]=temp;
        
        
    }
};