class Solution {
	public:
	void rearrange(vector<int> &arr) {
		vector<int>output;
		vector<int>positive;
		vector<int>negative;
		
		for (int i = 0; i<arr.size(); i++) {
			if (arr[i] >= 0) {
				positive.push_back(arr[i]);
			}
		}
		for (int i = 0; i<arr.size(); i++) {
			if (arr[i] < 0) {
				negative.push_back(arr[i]);
			}
		}
		
		int i = 0, j = 0;
		while (i<positive.size() || j<negative.size()) {
			if (i<positive.size()) {
				output.push_back(positive[i]);
			}
			if (j<negative.size()) {
				output.push_back(negative[j]);
			}
			i++;
			j++;
		}
		arr = {output.begin(), output.end()};
	}
};
