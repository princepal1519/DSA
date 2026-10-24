class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> answer;
        for (int i = 0; i < n; i++) {
           if(!answer.empty() && intervals[i][0]<=answer.back()[1]){
            answer.back()[1]=max(answer.back()[1],intervals[i][1]);
           }
           else{
            answer.push_back(intervals[i]);
           }
        }

        return answer;
    }
};