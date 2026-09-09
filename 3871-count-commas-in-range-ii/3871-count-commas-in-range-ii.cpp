class Solution {
public:
    long long countCommas(long long n) {

        if(n<1000){
            return 0;
        }

        
        int numb=1000;
        long long ans=0;
        int num=1;
        long long st=1000;


        while(st<=n){
            long long end=st*1000-1;
            if(n>=end){
                
                
                long long temp=end-st+1;
                
                ans+=(temp)*num;
                st*=1000;
                
                num++;
            }
            else{
                long long temp=n-st+1;
                

                ans+=temp*num;
                break;

            }

        }


        return ans;
        
    }
};