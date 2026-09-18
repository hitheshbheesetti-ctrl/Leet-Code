class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int>ans;

        int n=nums.size();

        vector<int>hash(101,0);

        for(int i=0;i<n;i++){
            hash[nums[i]]++;
        }

        for(int i=0;i<101;i++){
            if(hash[i]>1){
                ans.push_back(i);
            }
        }

        return ans;


        
    }
};