class Solution {
    public int findGCD(int[] arr) {
        int s=arr[0];
        int l=arr[0];
        int max=0;
        for(int i=0;i<arr.length;i++){
            if(arr[i]<s){
                s=arr[i];
            }
            if(arr[i]>l){
                l=arr[i];
            }
        }
        for(int i=1;i<=s;i++){
            if(s%i==0&&l%i==0){
                max=i;
            }
        }
        return max;
        
    }
}