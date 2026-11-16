class Solution {
    public List<List<Integer>> getSubArrays(int[] arr) {
        // code here
        List<List<Integer>>subarrays = new ArrayList<>();
        
        int n=arr.length;
        if(n==0){
            return subarrays;
        }
        
        
        for(int i=0;i<n;i++){
            List<Integer>v=new ArrayList<>();
            for(int j=i;j<n;j++){
                v.add(arr[j]);
                subarrays.add(new ArrayList<>(v));
            }
        }
        
        return subarrays;
    }
}