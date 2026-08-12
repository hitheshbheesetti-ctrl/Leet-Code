class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int maxi=*max_element(nums.begin(),nums.end());
        int max_num=INT_MIN;

        // for(int i=0;i<nums.size();i++){
        //     unordered_map<int,int> hash;

        //     for(int j=i;j<nums.size();j++){
        //         hash[nums[j]]++;
        //         if(hash[nums[j]]>k){
        //             break;
        //         }
        //         else{
        //             max_num=max(j-i+1,max_num);

        //         }

        //     }
        // }

        int left=0;
        int right=0;
        unordered_map<int,int>hash;

        while(right<nums.size()){
            

            hash[nums[right]]++;

            while(hash[nums[right]]>k){
                hash[nums[left]]--;
                left++;
            }
            
            max_num=max(right-left+1,max_num);
            
            right++;
        }



        return max_num;

        
    }
};