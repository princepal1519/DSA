class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {

        int n=num.size();

        for(int i=n-1;i>=0 && k>0;i--){
            k=k+num[i];
            num[i]=k%10;
            k=k/10;            
        }

        while(k>0){
            int dig=k%10;
            num.insert(num.begin(),dig);
            k=k/10;
        }

        return num;




    }
};