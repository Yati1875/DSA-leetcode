class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i] > nums[j]){
                    int temp=nums[i];
                    nums[i]=nums[j];
                    nums[j]=temp;
                }
            }
        }
        int n=nums.size();
        int pair1=nums[0]*nums[1];
        int pair2=nums[n-2]*nums[n-1];
        int ans= pair2-pair1;
        return ans;

        
    }
};