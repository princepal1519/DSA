class Solution {
  public:
    void removeCharacter(string &s, char c) {
        // code here
        string str="";
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]!=c){
                str+=char(s[i]);
            }
        }
       s=str;
    }
};