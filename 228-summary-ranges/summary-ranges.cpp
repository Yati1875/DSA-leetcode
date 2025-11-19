class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        int n = nums.size();
        if (n == 0) return res;
        long long start = nums[0], prev = nums[0]; // long long to avoid overflow when using +1 (safe)
        for (int i = 1; i < n; ++i) {
            long long x = nums[i];
            if (x == prev + 1) {
                prev = x;
            } else {
                if (start == prev) res.push_back(to_string(start));
                else res.push_back(to_string(start) + "->" + to_string(prev));
                start = prev = x;
            }
        }
        if (start == prev) res.push_back(to_string(start));
        else res.push_back(to_string(start) + "->" + to_string(prev));
        return res; 
    }
};