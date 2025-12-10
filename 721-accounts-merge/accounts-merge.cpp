class Solution {
public:
vector<int> parent;
    
    int findParent(int x) {
        if (parent[x] == x) return x;
        return parent[x] = findParent(parent[x]); // path compression
    }
    
    void unionSet(int x, int y) {
        int px = findParent(x);
        int py = findParent(y);
        if (px != py) parent[py] = px;
    }

    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        int n = accounts.size();
        parent.resize(n);
        for (int i = 0; i < n; i++) parent[i] = i;

        unordered_map<string, int> mailIndex;

        // Step 1: union accounts having same email
        for (int i = 0; i < n; i++) {
            for (int j = 1; j < accounts[i].size(); j++) {
                string email = accounts[i][j];
                if (mailIndex.count(email)) {
                    unionSet(i, mailIndex[email]);
                } else {
                    mailIndex[email] = i;
                }
            }
        }

        // Step 2: emails grouped by parent
        unordered_map<int, vector<string>> mp;
        for (auto &it : mailIndex) {
            int root = findParent(it.second);
            mp[root].push_back(it.first);
        }

        // Step 3: prepare final answer
        vector<vector<string>> ans;
        for (auto &it : mp) {
            auto &emails = it.second;
            sort(emails.begin(), emails.end());
            vector<string> temp;
            temp.push_back(accounts[it.first][0]); // name
            temp.insert(temp.end(), emails.begin(), emails.end());
            ans.push_back(temp);
        }
        return ans;
    }
};