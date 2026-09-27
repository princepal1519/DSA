class Solution {
  public:
    vector<int> getAlternates(vector<int> &arr) {
        vector<int>output;
        for(int i=0;i<arr.size();i+=2){
            output.push_back(arr[i]);
            }
            return output;
    }
};