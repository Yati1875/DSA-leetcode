class Solution {
    public int maxSubArray(int[] nums) {
        int curr= nums[0];
        int max=nums[0];
        int j=1;
        while(j<nums.length){
            curr=Math.max(nums[j], curr+nums[j]);
            max=Math.max(max, curr);
            j++;
            if(curr<0){
                curr=0;
            }
        }
        return max;
    }
}