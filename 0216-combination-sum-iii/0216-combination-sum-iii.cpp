class Solution {
public:

    void check(int ind,int k,int n,vector<int>&nums,vector<int>&ds,vector<vector<int>>&ans){
        if(ds.size()==k ){
            if(n==0){
                ans.push_back(ds);

            }
            return;
        }

        if(ind>8){
            return;
        }



        ds.push_back(nums[ind]);
        check(ind+1,k,n-nums[ind],nums,ds,ans);
        ds.pop_back();
        check(ind+1,k,n,nums,ds,ans);
    }





    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>ds;
        vector<vector<int>>ans;
        vector<int>nums={1,2,3,4,5,6,7,8,9};




        check(0,k,n,nums,ds,ans);



        return ans;

        
    }
};