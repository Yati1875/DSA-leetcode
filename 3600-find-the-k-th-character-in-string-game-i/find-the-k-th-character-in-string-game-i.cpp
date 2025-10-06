class Solution {
public:
    char kthCharacter(int k) {
        if (k == 1) return 'a';

        long long len = 1;
        while (len < k) len *= 2;

        return helper(k, len);
    }

private:
    char helper(long long k, long long len) {
        if (len == 1) return 'a';

        long long half = len / 2;

        if (k <= half) {
            return helper(k, half);
        } else {
            char prev = helper(k - half, half);
            return (prev == 'z') ? 'a' : prev + 1;
        }
    }
};
