class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> mp = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}
        };
        
        int n = s.length();
        int ans = 0;
        
        for(int i = 0; i < n; i++){
            if(i + 1 < n && mp[s[i]] < mp[s[i + 1]]){
                ans -= mp[s[i]];   // subtract if smaller before bigger
            } else {
                ans += mp[s[i]];   // otherwise add
            }
        }
        return ans;
    }
};