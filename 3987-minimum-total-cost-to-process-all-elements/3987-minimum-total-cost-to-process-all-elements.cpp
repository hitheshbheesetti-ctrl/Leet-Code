class Solution {
public:
    int minimumCost(vector<int>& nums, int k) {
        int n=nums.size();
        
        long long ans=0;
        long long resources=k;
        int temp=1;
        
        for(int i=0;i<n;i++){
            if(resources<nums[i]){
                long long need=nums[i]-resources;
                long long operations=((need+k-1)/k);
                ans+=operations;
                resources+=operations*k;
                
            
            }
            
            resources-=nums[i];
            
        }
        const long long MOD=1e9+7;

        long long a=ans;
        long long b=ans+1;
        

        if(a%2==0){
            a/=2;
        }
        else{
            b/=2;
        }

        return (a%MOD)*(b%MOD)%MOD;
        
    }
};