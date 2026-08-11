class Solution {
public:
    int missingInteger(vector<int>& nums) {

        int sum=nums[0];
        


        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]+1){
                sum+=nums[i];
            }
            else{
                break;
            }
        }

        int num=*max_element(nums.begin(),nums.end());


        vector<int>hash(num+1,0);
        
        
        


        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        int ans=0;
        if(sum>num){
            return sum;
        }

        for(int i=sum;i<=num;i++){
            if(hash[i]==0){
                return i;
            }
            ans=i;
        }
        
        
        return ans+1;
        
       

    }
};