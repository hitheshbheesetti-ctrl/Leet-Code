class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        // int n=nums.size();
        // sort(nums.begin(),nums.end());

        // int ans=0;
        // int st=0;
        // vector<int>aans;
        // if(n==1){
        //     return nums;
        // }

        // for(int i=0;i<n-1;i++){
        //     if(nums[i]==nums[i+1]){
        //         ans++;
        //     }
            
        //     else{
                
        //         if(ans>=n/3){
        //             aans.push_back(nums[i]);
        //         }
        //         ans=0;
        //     }

        // }
        // if(ans>=n/3){
        //     aans.push_back(nums[n-1]);
        // }


        // return aans;


        vector<int>ans;
        
        unordered_map<int,int>mp;
        int mini=nums.size()/3 +1;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            if(mp[nums[i]]==mini){
                ans.push_back(nums[i]);
            }
        }


        return ans;
    }
};