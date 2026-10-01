class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        unordered_set<int>s;
        vector<int>output;
        for(int i=0;i<arr.size();i++){
            if(s.find(arr[i])==s.end()){
                s.insert(arr[i]);
            }
            else{
                output.push_back(arr[i]);
            }
        }
        return output;
        
    }
};