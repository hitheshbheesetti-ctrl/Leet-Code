class Solution {
public:

    // bool check(int n){
    //     if(n==1){
    //         return true;
    //     }

        
    //     if(n%2!=0){
    //         return false;
    //     }
        
    //     return check(n/2);
        
    // }



    bool isPowerOfTwo(int n) {
        if(n==1 ){
            return true;
        }
        if(n%2!=0 || n==0 || n==INT_MIN){
            return false;
        }


        // return check(n);

        if((n&(n-1))==0){
            return true;
        }
        return false;


        
        
    }
};