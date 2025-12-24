class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int totalApples = 0;
        for (int a : apple) {
            totalApples += a;
        }

        sort(capacity.begin(), capacity.end(), greater<int>());

        int boxes = 0;
        for (int c : capacity) {
            if (totalApples <= 0) break;
            totalApples -= c;
            boxes++;
        }

        return boxes;
    }
};