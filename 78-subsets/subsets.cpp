class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> curr;
        sub(nums, 0, curr, result);
        return result;
    }

    void sub(vector<int>& nums, int i, vector<int>& curr, vector<vector<int>>& result) {
        int n = nums.size();
        if (i == n) {
            result.push_back(curr);  
            return;
        }

        
        sub(nums, i + 1, curr, result);

        
        curr.push_back(nums[i]);
        sub(nums, i + 1, curr, result);
        curr.pop_back();  
    }
};
