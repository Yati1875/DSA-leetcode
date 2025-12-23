class Solution {
public:
    int maxTwoEvents(vector<vector<int>>& events) {
        // Sort by start time
        sort(events.begin(), events.end());

        int n = events.size();
        vector<int> suffix(n);
        suffix[n - 1] = events[n - 1][2];

        // Build suffix max of values
        for (int i = n - 2; i >= 0; i--) {
            suffix[i] = max(suffix[i + 1], events[i][2]);
        }

        int ans = 0;

        for (int i = 0; i < n; i++) {
            int val = events[i][2];
            int l = i + 1, r = n - 1, idx = -1;

            // Binary search for first event with start > events[i].end
            while (l <= r) {
                int mid = (l + r) / 2;
                if (events[mid][0] > events[i][1]) {
                    idx = mid;
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            }

            if (idx != -1)
                val += suffix[idx];

            ans = max(ans, val);
        }

        return ans;
        
    }
};