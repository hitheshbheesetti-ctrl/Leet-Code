class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        int mini=*min_element(nums.begin(),nums.end());
        int maxi=*max_element(nums.begin(),nums.end());

        sort(nums.begin(),nums.end());

        for(int i=0;i<n;i++){
            if(mini!=nums[i]){
                ans.push_back(mini);
                i--;
            }
            mini++;
        }



        return ans;
    }
};