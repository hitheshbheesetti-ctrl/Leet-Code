class Solution {
public:
    int minMoves(vector<int>& nums) {
        int num=*max_element(nums.begin(),nums.end());

        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans+=(num-nums[i]);
        }




        return ans;
    }
};