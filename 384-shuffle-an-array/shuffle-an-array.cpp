class Solution {
private:
    vector<int> original;
    vector<int> current;

public:
    Solution(vector<int>& nums) {
        original = nums;
        current = nums;
    }
    
    vector<int> reset() {
        current = original;
        return current;
    }
    
    vector<int> shuffle() {
        current = original;
        for (int i = current.size() - 1; i > 0; i--) {
            int j = rand() % (i + 1);  
            swap(current[i], current[j]);
        }
        return current;
    }
};
