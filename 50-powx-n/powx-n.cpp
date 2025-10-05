class Solution {
public:
    double myPow(double x, int n) {
         long long N = n;                // handle INT_MIN safely
        if (N < 0) {
            x = 1.0 / x;
            N = -N;
        }
        double ans = 1.0;
        double cur = x;
        while (N > 0) {
            if (N & 1) ans *= cur;     // multiply when current bit is 1
            cur *= cur;                // square base
            N >>= 1;
        }
        return ans;
        
    }
};