class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int>ans;

        int st=0;
        int end=nums.size()-1;
        int temp=-1;
        while(st<=end){
            int mid=st+(end-st)/2;

            if(nums[mid]==target){
                temp=mid;
                end=mid-1;
            }
            else if(nums[mid]>target){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        if(temp==-1){
            return {-1,-1};
        }
        else{
            ans.push_back(temp);

        }
        

        st=0;
        end=nums.size()-1;
        temp=-1;

        while(st<=end){
            int mid=st+(end-st)/2;

            if(nums[mid]==target){
                temp=mid;
                st=mid+1;
            }
            else if(nums[mid]>target){
                end=mid-1;
            }
            else{
                st=mid+1;
            }


        }

        ans.push_back(temp);


        return ans;

    }
};