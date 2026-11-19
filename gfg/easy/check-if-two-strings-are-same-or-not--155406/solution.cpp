class Solution {
  public:
    bool areStringsSame(string &s1, string &s2) {
        int m=s1.size();
        int n=s2.size();
        
        // code here
        bool same=true;
        int i=0;
        int j=0;
        while(i<m && j<n){
            if(s1[i]!=s2[j]){
                return false;
            }
            i++;
            j++;
        }
        if(i<m || j<n)return false;
        return true;
    }
};