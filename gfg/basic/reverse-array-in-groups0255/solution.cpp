class Solution {
  public:
    void reverseInGroups(vector<int> &arr, int k) {
        // take start_index to reverse from that index to the index
        // where the sum is k of start_index come.
        int start_index=0;
        // intialize pointer to count k.
        int p=1;
        
        for(int i=0;i<arr.size();i++){
            if(p!=k){
                p++;
            }
            else if(p==k){
                reverse(arr.begin()+start_index,arr.begin()+i+1);
                start_index=i+1;
                p=1;
            }
        }
        if(start_index<arr.size()){
                reverse(arr.begin()+start_index,arr.end());
        }
    }
};
