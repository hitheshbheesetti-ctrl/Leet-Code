class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // int num=0;
        // int n=nums.size();

        // for(int i=0;i<n;i++){
        //     num^=nums[i];
        // }
        // return num;
        if(nums.size()==1){
            return nums[0];
        }



        int st=1;
        int end=nums.size()-2;
        if(nums[0]!=nums[1]){
            return nums[0];
        }
        if(nums[nums.size()-1]!=nums[nums.size()-2]){
            return nums[nums.size()-1];
        }

        while(st<=end){
            int mid=st+(end-st)/2;

            if(nums[mid]!=nums[mid-1]  &&  nums[mid]!=nums[mid+1]){
                return nums[mid];
            }
            else if(nums[mid]==nums[mid-1]){
                if((mid-1)%2==0){
                    st=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
            else{
                if(mid%2==0){
                    st=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
        }

        return -1;
    }
};