class Solution {
public:
    int search(vector<int>& nums, int target) {
        // int n=nums.size();
        // int st=0;
        // int end=n-1;
        // int mid=0;
        
        // int ans=-1;
        // vector<int>temp=nums;
        // sort(nums.begin(),nums.end());
        // int rotated=0;

        // while(st<=end){
        //     mid=st+(end-st)/2;

        //     if(nums[mid]==temp[0]){
        //         rotated=mid;
        //         break;

        //     }

        //     else if(nums[mid]<temp[0]){
        //         st=mid+1;
        //     }
        //     else{
        //         end=mid-1;
        //     }
        // }

        // st=0;end=n-1;
        // int tar=-1;
        // while(st<=end){
        //     mid=st+(end-st)/2;

        //     if(nums[mid]==target){
        //        tar=mid;
        //        break;
        //     }
        //     else if(nums[mid]<target){
        //         st=mid+1;
        //     }
        //     else {
        //         end=mid-1;
        //     }
        // }
        // if(temp==nums){
        //     return tar;
        // }
        // if(tar==-1) return -1;

        // return (tar-rotated+n)%n;

        // // %n used due to if it goes out of range to bring back into range

        int st=0;
        int end=nums.size()-1;
        int ans=-1;

        while(st<=end){
            int mid=st+(end-st)/2;

            if(nums[mid]==target){
                return mid;
            }

            if(nums[st]<=nums[mid]){
                if(nums[st]<=target && nums[mid]>=target){
                    end=mid-1;
                }
                else{
                    st=mid+1;
                }
            }
            else{
                if(target>=nums[mid] && nums[end]>=target){
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