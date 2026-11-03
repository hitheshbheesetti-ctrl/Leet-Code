class Solution {
public:
    int jump(vector<int>& nums) {
        
        int n=nums.size();

        int maxi=INT_MIN;
        int position=0;
        int ans=0;
        int end=0;


        for(int i=0;i<n-1;i++){
            position=nums[i]+i;

            if(position>maxi){
                maxi=position;
            }
            if(i==end){
                ans++;
                end=maxi;
            }

        }
        

        return ans;

        
        
    }
};