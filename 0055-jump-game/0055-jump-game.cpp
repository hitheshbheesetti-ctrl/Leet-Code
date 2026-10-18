class Solution {
public:
    bool canJump(vector<int>& nums) {
        

        int max_index=0;

        for(int i=0;i<nums.size();i++){
            if(i>max_index){
                return false;
            }
            max_index=max(i+nums[i],max_index);
        }


        return true;


    }
};