class Solution {
    public String mergeAlternately(String word1, String word2) {
        int n=word1.length();
        int m=word2.length();
        int c=n+m;
        String word3="";
        int i=0, j=0;
        while(i<c){
            if(j<n){
                word3=word3+word1.charAt(j);
                i++;
            }
            if(j<m){
                word3=word3+word2.charAt(j);
                i++;
            }
            j++;    

        }
        return word3;
        
    }
}