class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> answer;
        for (int i = 0; i < n; i++) {
            int start = intervals[i][0];
            int end = intervals[i][1];
            if(!answer.empty() && end<=answer.back()[1])continue;

            for (int j = i+1; j < n; j++) {
                if(intervals[j][0]<=end){
                    end=max(intervals[j][1],end);
                }
                else{
                    break;
                }
            }
            answer.push_back({start,end});
        }

        return answer;
    }
};