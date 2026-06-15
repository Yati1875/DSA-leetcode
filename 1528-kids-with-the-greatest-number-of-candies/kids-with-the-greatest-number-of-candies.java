class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
        int n=candies.length;
        int max=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(candies[j]>candies[max]){
                    max=j;
                }
            }
        }
        int c=0;
        List<Boolean> arr = new ArrayList<Boolean>(n);
        for(int x: candies){
            if((x+ extraCandies)>=candies[max]){
                arr.add(true);
            }
            else{
                arr.add(false);
            }
            c++;
        }
        return arr;  
    }
}