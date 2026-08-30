class Solution {
public:
    int minimumDeletions(vector<int>& nums) {

        int maxi=INT_MIN;
        int mini=INT_MAX;
        int ans=0;
        int n=nums.size();

        int ind1=0;
        int ind2=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxi){
                maxi=nums[i];
                ind1=i;
            }
            if(nums[i]<mini){
                mini=nums[i];
                ind2=i;
            }
        }


        ind1++;
        ind2++;
        int num1=max(ind1,ind2);


        int num2=max(n-ind1+1,n-ind2+1);
            
        
        
        int num3=min(ind1+n-ind2+1,ind2+n-ind1+1);;
        

       

        ans=min({num1,num2,num3});
        return ans;

        
    }
};