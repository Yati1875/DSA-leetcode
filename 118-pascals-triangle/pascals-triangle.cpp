class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        if (numRows <= 0) return res;

        res.reserve(numRows);
        for (int r = 0; r < numRows; ++r) {
            vector<int> row(r + 1, 1);      // row length = r+1, initialize with 1s
            for (int j = 1; j < r; ++j) {   // compute inner values
                row[j] = res[r-1][j-1] + res[r-1][j];
            }
            res.push_back(move(row));
        }
        return res;
    }
};