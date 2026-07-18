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

        while(mini!=0){
            int temp=mini;
            mini=maxi%mini;
            maxi=temp;
        }




        return maxi;
        
    }
};