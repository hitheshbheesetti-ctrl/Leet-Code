class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int ans=INT_MAX;
        int index=INT_MAX;

        for(int i=0;i<nums.size();i++){
            int num1=*max_element(nums.begin(),nums.begin()+i+1);
            int num2=*min_element(nums.begin()+i,nums.end());
            if((num1-num2)<=k){
                
                index=min(i,index);

            }
            
        }

        if(index==INT_MAX){
            index=-1;
        }


        return index;
        
    }
};