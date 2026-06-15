class Solution {
    public boolean canPlaceFlowers(int[] arr, int n) {
        int m=arr.length;
        for(int i=0;i<m;i++){
            if(arr[i]==0&&(i==0||arr[i-1]!=1)&&(i==m-1||arr[i+1]!=1)){
                arr[i]=1;
                n=n-1;
            }
        }

        if(n<=0){
            return true;
        }
        else{
            return false;
        }
        
    }
}