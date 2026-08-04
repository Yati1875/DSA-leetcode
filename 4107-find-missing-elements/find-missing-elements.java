class Solution {
    public List<Integer> findMissingElements(int[] nums) {
        int n=nums.length;
        Arrays.sort(nums);
        List<Integer> list=new ArrayList<>();
        int a=nums[0];
        int m=nums[n-1];
        int c=0;
        for(int i=a;i<m;i++){
            if(nums[c]==i){
                c++;
            }else{
                list.add(i);
            }
        }
        return list;


        
    }
}