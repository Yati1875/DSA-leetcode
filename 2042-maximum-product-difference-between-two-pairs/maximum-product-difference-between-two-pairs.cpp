//OPTIMAL APPROCH O(N)

class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int min1=INT_MAX;
        int min2=INT_MAX;
        int max1=INT_MIN;
        int max2=INT_MIN;

        for(int x:nums){
            if(x>max1){
                max2=max1;
                max1=x;
            }
            else if(x>max2){
                 max2=x;
            }
            if(x<min1){
                min2=min1;
                min1=x;
            }
            else if(x<min2){
                min2=x;
            }

        }
        return ((max1*max2)-(min1)*(min2));
        
    }
};