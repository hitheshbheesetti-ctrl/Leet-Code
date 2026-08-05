class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        
        int n=nums.size();

        sort(nums.begin(),nums.end());

        int st=0;
        int end=n-1;
        int ans=0;

        while(st<=end){
            // int mid=st+(end-st)/2;

            if(nums[st]+nums[end]<target){
                ans+=end-st;
                st++;
                
                

            }
            else if(nums[st]+nums[end]>=target){
                
                end--;

            }
            
        }

        return ans;
    }
};