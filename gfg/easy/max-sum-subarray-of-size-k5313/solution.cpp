class Solution {
	public:
	int maxSubarraySum(vector<int>& arr, int k) {
		int n = arr.size();
	    if(k>n)return -1;
		// code here
		int s = 0;
		int l = k - 1;
		int max_sum = INT_MIN;
		int sum = 0;
		for (int i = 0; i <= l; i++) {
			sum += arr[i];
		}
		max_sum=max(sum,max_sum);
		int c = k;
		while (c<n) {
			sum = sum+ arr[c]-arr[c - k];
			max_sum = max(max_sum, sum);
			c++;
		}
		return max_sum;
	}
};
