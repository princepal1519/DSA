class Solution {
	public:
	void rearrange(vector<int>& arr) {
	    int n=arr.size();
		// Your code here
		sort(arr.begin(), arr.end());
		vector<int>max_arr;
		vector<int>min_arr;
		for (int i = 0; i<n/2; i++) {
			min_arr.push_back(arr[i]);
			max_arr.push_back(arr[i+n/2]);
		}
		if(n%2!=0){
		    max_arr.push_back(arr[n-1]);
		}
		
		reverse(max_arr.begin(),max_arr.end());
		int m=0;
		for(int i=0;i<n;i+=2){
		    arr[i]=max_arr[m];
		    m++;
		}
		int s=0;
		for(int i=1;i<n;i+=2){
		    arr[i]=min_arr[s];
		    s++;
		}
	}
};
