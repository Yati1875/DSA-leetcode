class Solution {
    public int furthestDistanceFromOrigin(String moves) {
        int l=0;
        int r=0;
        int b=0;
        for(char x: moves.toCharArray()){
            if(x=='L'){
                l++;

            }
            else if(x=='R'){
                r++;
            }
            else{
                b++;
            }

        }
        return Math.abs(r-l)+b;
        
    }
}