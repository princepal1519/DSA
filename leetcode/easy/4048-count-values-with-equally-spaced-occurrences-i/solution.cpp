class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int count = 0;
        map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        vector<int> newarr;
        for (auto& n : mp) {
            if (n.second == 3) {
                newarr.push_back(n.first);
            }
        }
        vector<int> output;
        for (int i = 0; i < newarr.size(); i++) {
            int i1 = -1;
            int i2 = -1;
            int i3 = -1;

            for (int j = 0; j < nums.size(); j++) {
                if (nums[j] == newarr[i]) {
                    if (i1 == -1) {
                        i1 = j;
                    } else if (i2 == -1) {
                        i2 = j;
                    } else {
                        i3 = j;
                    }
                }
            }
            if ((i2 - i1) == (i3 - i2)) {
                output.push_back(newarr[i]);
            }
        }
        return output.size();
    }
};