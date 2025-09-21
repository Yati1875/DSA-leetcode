class Solution {
public:
    bool isPowerOfTwo(int n) {
        int x=n;
        if(x==1){
            return true;
        }

        if((x%2!=0)||(x<=0)){
            return false;
        }
        
        while(x>=2){
            int r = x%2;
            if(r!=0){
                return false;
                break;
            }
            x=x/2;
        }
        return true;
        
    }
};