class Solution {
public:
    int firstUniqChar(string s) {
        int arr[26]={0};
        for(int i=0;i<s.length();i++){
            int b=s[i]-'a';
            arr[b]++;

        }
        for (int i = 0; i < s.length(); i++) {
            if (arr[s[i] - 'a'] == 1)
                return i;
        }
        return -1;
        
    }
};