class Solution {
public:
    int superPow(int a, vector<int>& b) {
        if (b.empty()) return 1;
        
        int lastDigit = b.back();
        b.pop_back();
        
        int part1 = modPow(a, lastDigit);
        int part2 = modPow(superPow(a, b), 10);
        
        return (part1 * part2) % base;
        
    }
    int base = 1337;
    
    int modPow(int a, int k) {
        int result = 1;
        a %= base;
        while (k > 0) {
            if (k % 2 == 1) {
                result = (result * a) % base;
            }
            a = (a * a) % base;
            k /= 2;
        }
        return result;
    }

};