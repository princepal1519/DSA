class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        vector<int>positive;
        vector<int>negative;
        for(int j=0;j<arr.size();j++){
            if(arr[j]<0){
                negative.push_back(arr[j]);
            }
            else if(arr[j]>=0){
                positive.push_back(arr[j]);
            }
        }
        int j=0;
        for(int i=0;i<positive.size();i++){
            arr[j]=positive[i];
            j++;
        }
        for(int i=0;i<negative.size();i++){
            arr[j]=negative[i];
            j++;
        }
        
    }
};