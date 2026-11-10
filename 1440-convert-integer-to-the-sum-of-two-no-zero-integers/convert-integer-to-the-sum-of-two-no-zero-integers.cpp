class Solution {
private:
    bool iszero(int x){
        int temp=x;
        while(temp>0){
            int digit=temp%10;
            if(digit==0){
                return true;
            }
            temp=temp/10;
        }
        return false;
    }
public:
    vector<int> getNoZeroIntegers(int n) {
        int first=n/2;
        int last=n-first;

        while(iszero(first) || iszero(last)){
            first--;
            last++;
        }  
        return {first,last};    
    }
};