class Solution {
public:

    void check(int ind,vector<int>&nums, vector<int>&ds,vector<vector<int>>&ans){
        if(ind==nums.size()){
            ans.push_back(ds);
            return;

        }
        
            
        

        
        ds.push_back(nums[ind]);
        check(ind+1,nums,ds,ans);
        ds.pop_back();
        



        int i=ind+1;
        while(i<nums.size() && nums[i]==nums[i-1]){
            i++;
        }
        check(i,nums,ds,ans);

        

        
        
    }



    vector<vector<int>> subsetsWithDup(vector<int>& nums) {


        vector<int>ds;
        vector<vector<int>>ans;

        sort(nums.begin(),nums.end());



        
        check(0,nums,ds,ans);



        return ans;

        
    }
};