class Solution {
    public String mapWordWeights(String[] words, int[] weights) {
        StringBuilder ans = new StringBuilder();

for (String word : words) {

    int sum = 0;

    for (char c : word.toCharArray()) {
        sum += weights[c - 'a'];
    }

    char mapped = (char)('z' - (sum % 26));

    ans.append(mapped);
}

return ans.toString();
        
    }
}