class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> mp;
        for (int i = 0; i < nums2.size(); i++) {
            mp[nums2[i]]++;
        }
        vector<int> output;
        for (int i = 0; i < nums1.size(); i++) {
            if (mp.find(nums1[i]) != mp.end() && mp[nums1[i]]>0 ) {
                output.push_back(nums1[i]);
                mp[nums1[i]]--;
            }
        }
        return output;
    }
};