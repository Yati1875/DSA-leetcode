class Solution {
    public String reverseWords(String s) {
        String[] arr=s.trim().split("\\s+");
        int n=arr.length;
        int left=0, right=n-1;
        while(left<right){
            String temp=arr[left];
            arr[left]=arr[right];
            arr[right]=temp;
            left++;
            right--; 
        }
        String ans=String.join(" ",arr);
        return ans.trim();
        
    }
}