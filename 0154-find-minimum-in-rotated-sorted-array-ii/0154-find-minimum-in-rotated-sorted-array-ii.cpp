class Solution {
public:
    int findMin(vector<int>& nums) {
        int st=0;
        int end=nums.size()-1;
        int mini=INT_MAX;
        
        while(st<=end){
            
            int mid=st+(end-st)/2;
            if(nums[st]==nums[mid] && nums[mid]==nums[end]){
                mini=min(mini,nums[st]);
                st++;
                end--;
                
                continue;
            }

            if(nums[st]<=nums[mid]){
                if(nums[st]<mini){
                    mini=nums[st];
                }
                
                st=mid+1;
            }
            else{
                if(nums[mid]<mini){
                    mini=nums[mid];
                }
                end=mid-1;
            }

        }


        return mini;
        
    }
};