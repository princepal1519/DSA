class Solution {
public:
    bool checkString(string s) {
        int c_a=0;
        int c_b=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='a' && c_b==1)return false;            
            if(s[i]=='a'){
                c_a=1;
            }
            else if(s[i]=='b'){
                c_b=1;
            }
        }
        return true;
    }
};