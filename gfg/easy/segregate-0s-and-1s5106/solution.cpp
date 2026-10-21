class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        int i=0;
        int j=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==1)continue;
            else{
                swap(arr[i],arr[j]);
                j++;
            }
        }
        
    }
};