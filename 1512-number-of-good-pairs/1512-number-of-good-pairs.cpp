class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {

        int ans=0;
        int n=nums.size();
        int hash[1000]={0};
        

        for(int i=0;i<nums.size();i++){
            
            hash[nums[i]]++;
            
            
        }

        for(int i=0;i<1000;i++){
            int num=hash[i];
            ans+=(num*(num-1)/2);
        }


        return ans;

        
    }
};