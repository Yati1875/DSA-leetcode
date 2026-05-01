class Solution {
    public int maxRotateFunction(int[] arr) {
        int n = arr.length;
        int sum = 0;
        int R0 = 0;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
            R0 += arr[i] * i;
         }
         int max = R0;
         int curr = R0;
         for (int j = 1; j < n; j++) {
         curr = curr + sum - n * arr[n - j];
         max = Math.max(max, curr);
        }

    return max;
}
    // static int rotate(int[] arr,int c){
    //     // int n=arr.length;
    //     // if(c==1){
    //     //     int sum=0;
    //     //     for(int i=0;i<n;i++){
    //     //         sum=sum+(arr[i]*i);
    //     //     }
    //     //     return sum;   
    //     // }
        
    //     // int temp=arr[n-1];
    //     // for(int i=n-1;i>0;i--){
    //     //     arr[i]=arr[i-1];

    //     // }
    //     // arr[0]=temp;
    //     // int sum=rotate(arr,c-1);
    //     // int sum2=0;
    //     // for(int i=0;i<n;i++){
    //     //         sum2=sum2+(arr[i]*i);
    //     // }
    //     // return Math.max(sum,sum2);


    // // }
    // public int maxRotateFunction(int[] arr) {
    //      int n = arr.length;

    //      int sum = 0;
    //      int R0 = 0;

    //     for (int i = 0; i < n; i++) {
    //         sum += arr[i];
    //         R0 += arr[i] * i;
    //     }

    //      int max = R0;
    //      int curr = R0;

    //     for (int j = 1; j < n; j++) {
    //         curr = curr + sum - n * arr[n - j];
    //         max = Math.max(max, curr);
    //     }   

    //     return max;
    //     // int c= arr.length;
    //     // int c=0;
    //     // int max=0;
    //     // while(c<n){
    //     //     int sum=0;
    //     //     for(int i=0;i<n;i++){
    //     //         sum=sum+(arr[i]*i);
    //     //     }
    //     //     max=Math.max(max,sum);
    //     //     rotate(arr,n);
    //     //     c++;

    //     // }
    //     // int max=rotate(arr,c);
    //     // return max;
        
        

        
    // }
}