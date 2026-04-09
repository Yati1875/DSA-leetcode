class Solution {
    public int[] rearrangeArray(int[] arr) {
        int n=arr.length;
        int[] pos=new int[n];
        int[] nev=new int[n];
        int k=0,j=0;
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                pos[k++]=arr[i];
            }
            else{
                nev[j++]=arr[i];
            }
        }
        int x=0,y=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
              arr[i]=pos[x++];  
            }
            else{
                arr[i]=nev[y++];
            }
        }
        return arr;
    }
}