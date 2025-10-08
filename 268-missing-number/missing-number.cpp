class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int target= (n*(n+1))/2;
        int a=0;
        for(int num:nums) a=a+num;
        return target-a;
    }
};