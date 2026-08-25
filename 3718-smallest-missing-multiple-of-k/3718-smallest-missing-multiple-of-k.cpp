class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        

        sort(nums.begin(),nums.end());
        int num=nums[nums.size()-1];
        
        vector<int>hash(1001,0);

        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }

        for(int i=1;i<=nums.size()+1;i++){
            int num=i*k;

            if(hash[num]==0){
                return num;
            }

        }

        return 0;
        
    }
};