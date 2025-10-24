class Solution {
public:
    int findNthDigit(int n) {
        long long len = 1;        // digit length
        long long count = 9;      // count of numbers with that digit length
        long long start = 1;      // starting number of that range

        // Step 1: Find the digit length group
        while (n > len * count) {
            n -= len * count;
            len++;
            count *= 10;
            start *= 10;
        }

        // Step 2: Find the actual number containing the nth digit
        start += (n - 1) / len;
        string s = to_string(start);

        // Step 3: Find the nth digit within that number
        return s[(n - 1) % len] - '0';
        
    }
};