class Solution {
public:

    // void subset(int i,vector<vector<int>>&ans,vector<int>&nums,vector<int>&temp){
    //     if(i==nums.size()){
    //         ans.push_back(temp);
    //         return;

    //     }

    //     temp.push_back(nums[i]);
    //     subset(i+1,ans,nums,temp);
    //     temp.pop_back();
        
    //     subset(i+1,ans,nums,temp);
    // }


    vector<vector<int>> subsets(vector<int>& nums) {

        vector<vector<int>>ans;
        vector<int>temp;

        // subset(0,ans,nums,temp);
        int n=nums.size();

        int subsets=1<<n;

        for(int i=0;i<=subsets-1;i++){
            vector<int>temp1;
            for(int j=0;j<nums.size();j++){
                if((i&(1<<j))){
                    temp1.push_back(nums[j]);
                }
            }

            
            
            ans.push_back(temp1);
        }

        


        return ans;
        
    }
};