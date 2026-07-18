class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mini=INT_MAX;
        int maxi=INT_MIN;

        for(int i=0;i<nums.size();i++){
            mini=min(nums[i],mini);
            maxi=max(nums[i],maxi);

        }

        int ans=1;

        for(int i=mini;i>=1;i--){
            if(mini%i==0 && maxi%i==0){
                ans=i;
                break;
            }
        }




        return ans;
        
    }
};