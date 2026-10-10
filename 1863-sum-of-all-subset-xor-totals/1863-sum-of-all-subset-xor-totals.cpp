class Solution {
public:

    void check(int index,int &ans,vector<int>&nums,int sum){
        if(index==nums.size()){
            ans+=sum;
            return;
        }
        int temp=sum;
        sum^=nums[index];
        check(index+1,ans,nums,sum);
        sum=temp;
        check(index+1,ans,nums,sum);
    }

    int subsetXORSum(vector<int>& nums) {

        int ans=0;

        check(0,ans,nums,0);




        return ans;
        
        
    }
};