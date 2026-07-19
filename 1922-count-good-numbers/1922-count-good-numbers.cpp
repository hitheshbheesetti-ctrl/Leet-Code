class Solution {
public:

    const long long MOD=1e9+7;


    long long power(long long base,long long power){
        long long ans=1;
        
        

        while(power>0){
            if(power%2==0){
                base=(base*base)%MOD;
                power=power/2;
            }
            else{
                ans=(ans*base)%MOD;
                power--;
            }
        }



        return ans;

    }

    
    int countGoodNumbers(long long n) {

        long long ans=1;
        const long long MOD=1e9+7;

        if(n%2==0){
            long long num=n/2;
            ans=power(5,num)%MOD;
            ans=(ans*power(4,num))%MOD;
        }
        else{
            long long num=n/2;
            ans=power(5,n/2+1)%MOD;
            ans=(ans*power(4,num))%MOD;
        }





        return ans;
        
        
    }
};