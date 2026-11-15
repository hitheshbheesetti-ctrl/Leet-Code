class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int ans=0;
        int MOD=1e9+7;
        
        // for(int i=0;i<arr.size();i++){
        //     int sum=0;
        //     for(int j=i;j<arr.size();j++){
        //         sum+=arr[j];
        //         if(sum%2!=0){
                    
        //             ans=(ans+1) % MOD;
        //         }
        //     }
        // }

        vector<int>prefix(arr.size(),0);
        prefix[0]=arr[0];



        for(int i=1;i<arr.size();i++){
            prefix[i]=prefix[i-1]+arr[i];
        }

        int odd=0;
        int even=1;

        
        for(int i=0;i<prefix.size();i++){
            if(prefix[i]%2==0){
                ans=(ans+odd)%MOD;
                even++;
            }
            else{
                odd++;
                ans=(ans+even)%MOD;
                
            }

        }



        
        




        return ans;
    }
};