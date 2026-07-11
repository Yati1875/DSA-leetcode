class Solution {
    public int lengthOfLongestSubstring(String s) {

        int n = s.length();
        int max = 0;

        for (int i = 0; i < n; i++) {

            List<Character> list = new ArrayList<>();

            for (int j = i; j < n; j++) {

                if (list.contains(s.charAt(j))) {
                    break;
                }

                list.add(s.charAt(j));
            }

            max = Math.max(max, list.size());
        }

        return max;
    }
}