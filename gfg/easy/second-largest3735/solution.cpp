class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int second=-1;
        int first=arr[0];
        for(int i=1;i<arr.size();i++){
            if(arr[i]>first){
                second=first;
                first=arr[i];
            }
            else if(arr[i]<first && arr[i]>second){
                second=arr[i];
            }
        }
        return second;
    }
};