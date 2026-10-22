class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        // code here
        vector<int>arr;
        for(int i=0;i<a.size();i++){
            arr.push_back(a[i]);
        }
        for(int i=0;i<b.size();i++){
            arr.push_back(b[i]);
        }
        sort(arr.begin(),arr.end());
        
        int n=arr[k-1];
        return n;
        
    }
};