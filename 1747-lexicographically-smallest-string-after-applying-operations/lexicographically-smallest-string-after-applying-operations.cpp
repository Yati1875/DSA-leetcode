class Solution {
public:
    string findLexSmallestString(string s, int a, int b) {
        queue<string> q;
        unordered_set<string> visited;
        string result = s;

        q.push(s);
        visited.insert(s);

        while (!q.empty()) {
            string cur = q.front();
            q.pop();

            if (cur < result) result = cur;

            string op1 = addOperation(cur, a);
            if (!visited.count(op1)) {
                visited.insert(op1);
                q.push(op1);
            }

            string op2 = rotateOperation(cur, b);
            if (!visited.count(op2)) {
                visited.insert(op2);
                q.push(op2);
            }
        }

        return result;
        
    }
    string addOperation(string s, int a) {
        for (int i = 1; i < s.size(); i += 2) {
            s[i] = ((s[i] - '0' + a) % 10) + '0';
        }
        return s;
    }

    string rotateOperation(string s, int b) {
        int n = s.size();
        b %= n;
        return s.substr(n - b) + s.substr(0, n - b);
    }

};