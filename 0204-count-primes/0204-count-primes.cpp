class Solution {
public:

    bool check(int n){
        if(n<=1){
            return false;
        }
        if(n==2){
            return true;
        }
        if(n%2==0){
            return false;
        }

        
        for(int i=3;i*i<=n;i+=2){
            if(n%i==0){
                return false;
            }
        }

        return true;
    }



    int countPrimes(int n) {
        // int ans=0;
        // vector<int>prime(n+1,1);
        // if(n==0){
        //     return 0;
        // }
        // if(n==1){
        //     return 0;
        // }
        // prime[0]=0;
        // prime[1]=0;

        // for(int i=2;i*i<=n;i++){
        //     if(prime[i]==1){
                
        //         for(int j=i*i;j<n;j+=i){
        //             prime[j]=0;
        //         }
        //     }

        // }

        // for(int i=0;i<n;i++){
        //     if(prime[i]==1){
        //         ans++;
        //     }
        // }



        // return ans;


        int ans=0;
        if(n>2){
            ans++;
        }

        for(int i=3;i<n;i+=2){
            if(check(i)){
                ans++;
            }
        }

        return ans;

        
    }
};