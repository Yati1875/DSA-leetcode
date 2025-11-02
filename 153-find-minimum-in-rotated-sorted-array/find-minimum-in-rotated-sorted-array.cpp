class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            
            // If middle element is greater than the rightmost element,
            // minimum must be in the right half
            if (nums[mid] > nums[right])
                left = mid + 1;
            else
                right = mid;
        }
        
        return nums[left];
        
    }
};