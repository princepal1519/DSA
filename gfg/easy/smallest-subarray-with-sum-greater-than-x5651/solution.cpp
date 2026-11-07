class Solution {
	public:
	int smallestSubWithSum(int x, vector<int>& arr) {
		int min_sub_arr = INT_MAX;
		int sum = 0;
		int j = 0 ;
		for (int i = 0 ; i < arr.size () ; i++) {
			sum += arr[i];
			if (sum>x) {
				while (sum>x) {
					min_sub_arr = min(min_sub_arr, i - j + 1);
					sum -= arr[j];
					j++;
				}
			}
		}
		if(min_sub_arr==INT_MAX)return 0;
		return min_sub_arr;
	}
};
