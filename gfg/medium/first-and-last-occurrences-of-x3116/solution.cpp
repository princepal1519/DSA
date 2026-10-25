class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        vector<int>f_last;
        f_last.push_back(-1);
        f_last.push_back(-1);
        int c=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==x){
                c++;
                if(c==1){
                    f_last[0]=i;
                }
                else{
                    f_last[1]=i;
                }
            }
        }
        if(c==1){
            f_last[1]=f_last[0];
        }
        return f_last;
        
        
    }
};