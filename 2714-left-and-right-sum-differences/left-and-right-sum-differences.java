class Solution {
    public int[] leftRightDifference(int[] nums) {
        int n=nums.length;
        int[] leftSum = new int[n];
        int[] rightSum = new int[n];
        for(int i=0;i<n;i++){
            int j=i-1;
            if(j<0){
                leftSum[i]=0;
            }
            else{
                leftSum[i]=leftSum[j]+nums[j];
            }
        }
        for(int i=n-1;i>=0;i--){
            int j=i+1;
            if(j>n-1){
                rightSum[i]=0;
            }
            else{
                rightSum[i]=rightSum[j]+nums[j];
            }
        }
        for(int i=0;i<n;i++){
            nums[i]=Math.abs(leftSum[i]-rightSum[i]);
        }
        return nums;


        
    }
}