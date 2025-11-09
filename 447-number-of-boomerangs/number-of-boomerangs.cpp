class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& points) {
        int res = 0;
        for (auto &p : points) {
            unordered_map<long long, int> cnt;
            for (auto &q : points) {
                long long dx = p[0] - q[0];
                long long dy = p[1] - q[1];
                long long dist = dx * dx + dy * dy;
                cnt[dist]++;
            }
            for (auto &c : cnt) {
                int count = c.second;
                res += count * (count - 1);
            }
        }
        return res;
        
    }
};