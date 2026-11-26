class Solution {
public:
    bool canAliceWin(int n) {
        bool alice=true;
        bool bob=true;
        int dec=10;
        int i=1;
        int temp=n;
        while(temp>=0){
            if(i%2!=0){
                if(temp<=0 || temp-dec<0){
                    return false;
                }
                temp=temp-dec;
                dec--;
                i++;
            }
            else{
                if(temp<=0 ||  temp-dec<0){
                    return true;
                }
                temp=temp-dec;
                dec--;
                i++;
            }
        }
        return alice;
    }
};