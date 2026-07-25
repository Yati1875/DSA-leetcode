class Solution {
    public int maxProduct(int n) {
        int max1=0;
        int max2=0;
        while(n>0){
            int curr=n%10;
            if(max1<curr){
                
                max2=max1;
                max1=curr;
            }
            else if(max2<curr){
                max2=curr;
            }
            n=n/10;
        }
        return max1*max2;

        
    }
}