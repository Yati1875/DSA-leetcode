class Solution {
    public int[] twoSum(int[] nums, int target) {
        int i=0;
        int j = nums.length-1;
        int[][] ans= new int[j+1][2];
        for(int k=0;k<=j;k++){
            ans[k][0]=nums[k];
            ans[k][1]=k;

        }
        
        Arrays.sort(ans,(a,b)-> Integer.compare(a[0], b[0]));
        while(i<j){
            if(target == (ans[i][0]+ans[j][0])){
                return new int[]{ans[i][1], ans[j][1]};
            }
            else if(target > (ans[i][0] + ans[j][0])){
                i++;
            }
            else if(target < (ans[i][0] + ans[j][0])){
                j--;
            }

        } 
        return new int[]{};    
    }
}