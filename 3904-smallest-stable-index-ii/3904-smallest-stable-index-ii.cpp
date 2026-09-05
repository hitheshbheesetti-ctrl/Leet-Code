class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {


        
        int n=nums.size();
        int suff[n];
        
        suff[n-1]=nums[n-1];

        for(int i=n-2;i>=0;i--){
            suff[i]=min(suff[i+1],nums[i]);

        }

        int max_so_far=0;

        for(int i=0;i<n;i++){
            max_so_far=max(nums[i],max_so_far);

            if(max_so_far-suff[i]<=k){
                return i;
            }


        }

        return -1;

    


       
        
    }
};