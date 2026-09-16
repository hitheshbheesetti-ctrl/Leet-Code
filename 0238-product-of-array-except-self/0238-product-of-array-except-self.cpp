class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        
        vector<int>ans(n,0);
        int index=0;
        int zeroes=0;
        int num=1;


        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                zeroes++;
                index=i;
            }
            else{
                num*=nums[i];
            }
        }

        if(zeroes==1){
            ans[index]=num;
            return ans;
        }
        else if(zeroes>1){
            return ans;
        }

        vector<int>suffix(n,0);
        suffix[n-1]=1;
        vector<int>prefix(n,0);
        prefix[0]=1;

        int num1=suffix[n-1];

        for(int i=n-2;i>=0;i--){
            
            suffix[i]=suffix[i+1]*nums[i+1];
            
        }

        
        int num2=prefix[0];


        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]*nums[i-1];
            
            

        }

        for(int i=0;i<n;i++){
            ans[i]=prefix[i]*suffix[i];
        }



        return ans;

        

        
    }
};