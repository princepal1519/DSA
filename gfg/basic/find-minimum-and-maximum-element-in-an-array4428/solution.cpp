class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        vector<int>output;
        // create an output array for storing min and max element in array .
        int min=arr[0];
        int max=arr[0];
        for(int i=1;i<arr.size();i++){
            if(arr[i]>max){
                max=arr[i];
            }
            if(arr[i]<min){
                min=arr[i];
            }
        }
        
        output.push_back(min);
        output.push_back(max);
        
        return output;
    }
};