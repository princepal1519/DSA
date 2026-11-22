class Solution {
    public String removeSpaces(String s) {
        // code here
        int n=s.length();
        String str="";
        for(int i=0;i<n;i++){
            if(Character.isLetter(s.charAt(i))){
                str+=s.charAt(i);
            }
        }
        return str;
    }
}