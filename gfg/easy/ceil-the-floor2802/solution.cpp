class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        sort(arr.begin(),arr.end());
        
        vector<int>output;
        
        
        int floor_el=INT_MIN;
        int ciel_el=INT_MAX;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=x){
                floor_el=max(floor_el,arr[i]);
            }
            if(arr[i]>=x){
                ciel_el=min(ciel_el,arr[i]);
            }
        }
        if(floor_el>INT_MIN && ciel_el<INT_MAX){
            output.push_back(floor_el);
            output.push_back(ciel_el);
            return output;
        }
        else if(floor_el==INT_MIN && ciel_el<INT_MAX ){
            
            output.push_back(-1);
            output.push_back(ciel_el);
            return output;
        }
        else if(floor_el>INT_MIN && ciel_el==INT_MAX ){
            output.push_back(floor_el);
            output.push_back(-1);
            return output;
        }
        
        return {-1,-1};
    }
};