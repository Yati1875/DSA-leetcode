class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.size(), m = p.size();
        if (m > n) return {};

        vector<int> freqP(26, 0), freqS(26, 0);
        vector<int> result;

        // count frequency of p
        for (char c : p)
            freqP[c - 'a']++;

        // first window
        for (int i = 0; i < m; i++)
            freqS[s[i] - 'a']++;

        if (freqS == freqP)
            result.push_back(0);

        // slide the window
        for (int i = m; i < n; i++) {
            freqS[s[i] - 'a']++;           // add right char
            freqS[s[i - m] - 'a']--;       // remove left char

            if (freqS == freqP)
                result.push_back(i - m + 1);
        }

        return result;
    }
};
