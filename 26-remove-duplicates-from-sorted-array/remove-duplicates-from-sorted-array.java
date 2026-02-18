class Solution {
    public int removeDuplicates(int[] nums) {
        int s=0;
        int f=1;
        int c=1;
        while(f<nums.length){
            
            if(nums[s]!=nums[f]){
                nums[c]=nums[f];
                s=f;
                c++;
            }
            f++;
        }
        return c;
        
    }
}