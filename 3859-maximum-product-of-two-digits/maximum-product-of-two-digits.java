class Solution {
    public int maxProduct(int n) {
        String x=Integer.toString(n);
        int[] arr=new int[x.length()];
        for(int i=0;i<x.length();i++){
            arr[i]=n%10;
            n=n/10;
        }
        Arrays.sort(arr);
        int m=arr.length;
        return arr[m-2]*arr[m-1];

        
    }
}