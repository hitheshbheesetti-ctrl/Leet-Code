class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int ans=0;
        vector<vector<int>>arr;
        

        for(int i=0;i<nums.size();i++){
            vector<int>hash(1001,0);
            int sum=0;
            for(int j=i;j<nums.size();j++){
                if(hash[nums[j]]==0){
                    sum++;
                }

                hash[nums[j]]++;
                ans+=(sum*sum);

            }
           
        }



        return ans;
        
    }
};