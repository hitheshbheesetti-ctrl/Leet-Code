class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int num1;
        int num2;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            num1=nums[i]%3;
            num2=3-num1;
            if(num1>num2){
                ans+=num2;
            }
            else if(num2>num1){
                ans+=num1;
            }
        }





        
        return ans;

        
        
    }
};