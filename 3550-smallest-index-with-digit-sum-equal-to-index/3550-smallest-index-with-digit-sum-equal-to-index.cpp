class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        
        int ans=INT_MAX;

        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            int sum=0;

            
        
            while(num>0){
                sum+=num%10;
                num=num/10;
            }

            

            if(sum==i){
                ans=min(i,ans);
            }



            

            


        }

        
        if(ans!=INT_MAX){
            return ans;
        }

        return -1;
        


    }
};