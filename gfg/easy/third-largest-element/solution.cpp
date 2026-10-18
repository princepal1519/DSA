class Solution {
  public:
    int thirdLargest(vector<int> &arr) {
        int f_max=-1;
        int s_max=-1;
        int t_max=-1;
        if(arr.size()==2)return -1;
        if(arr[0]>=arr[1]){
            f_max=arr[0];
            s_max=arr[1];
        }
        else{
            f_max=arr[1];
            s_max=arr[0];
        }
        
        for(int i=2;i<arr.size();i++){
            if(arr[i]>=f_max ){
                t_max=s_max;
                s_max=f_max;
                f_max=arr[i];
            }
            else if(arr[i]>=s_max && arr[i]<f_max){
                t_max=s_max;
                s_max=arr[i];
            }
            else if(arr[i]<f_max && arr[i]<s_max && arr[i]>t_max){
                t_max=arr[i];
            }
        }
        return t_max;
    }
};