class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total = 0;    // total gas - cost over all
        int tank = 0;     // current tank while scanning
        int start = 0;    // potential starting index
        
        for (int i = 0; i < gas.size(); i++) {
            int diff = gas[i] - cost[i];
            total += diff;
            tank += diff;
            
            // tank becomes negative -> cannot start from 'start'
            if (tank < 0) {
                start = i + 1;   // reset start point
                tank = 0;        // reset tank
            }
        }
        
        // If total gas is sufficient, return start; else -1
        return (total >= 0) ? start : -1;
    }
};