class Solution {
    public int maxProfit(int[] prices) {
        int i=0;
        int j=1;
        int ans=0;
        while(j<prices.length){
            int profit=prices[j++]-prices[i++];
            if(profit>0){
                ans=ans+profit;
            }
        }
        return ans;
        
    }
}