class Solution {
public:
    int divide(int dividend, int divisor) {

        // if(dividend==divisor) return 1;


        // bool sign=true;

        // if(dividend>0 && divisor<0){
        //     sign=false;
        // }
        // else if(dividend<0 && divisor>0){
        //     sign=false;
        // }

        
        // long n=abs((long long)dividend);
        // long d=abs((long long)divisor);
        // long long quotient=0;
        

        // while(n>=d){
        //     int cnt=0;
        //     while(n>=(d<<(cnt+1))){
        //         cnt+=1;
        //     }
        //     quotient+=1<<cnt;
        //     n-=(d<<cnt);
            

        // }

        // if(quotient==(1<<31) && sign){
        //     return INT_MAX;
        // }
        
        // if(quotient==(1<<31) && !sign){
        //     return INT_MIN;
        // }

        // return sign? quotient : -quotient;


        if(divisor==dividend){
            return 1;
        }

        bool sign=true;

        if(dividend>0 && divisor<0){
            sign=false;
        }
        if(dividend<0 && divisor>0){
            sign=false;
        }

        long long n=abs((long long)dividend);
        long long d=abs((long long)divisor);

        long long ans=0;

        while(n>=d){

            int i=0;

            while((d<<i)<=n){
                i++;
                
            }

            
            ans+=(1<<(i-1));
            n-=(d<<(i-1));

        }


        if(ans==(1<<31) && sign==true){
            return INT_MAX;
        }
        if(ans==(1<<31) && sign==false){
            return INT_MIN;
        }

        if(sign==false){
            return -ans;
        }

        else{
            return ans;
        }


        

















    }
};