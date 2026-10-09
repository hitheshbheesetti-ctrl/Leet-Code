class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        // vector<int>ans;
        // int n=nums.size();
        // if(nums.size()<=2){
        //     return nums;
        // }

        // sort(nums.begin(),nums.end());

        // for(int i=1;i<nums.size()-1;i++){
        //     if(nums[i]!=nums[i-1] && nums[i]!=nums[i+1]){
        //         ans.push_back(nums[i]);

        //     }
        // }
        // if(nums[0]!=nums[1]){
        //     ans.push_back(nums[0]);
        // }
        // if(nums[n-1]!=nums[n-2]){
        //     ans.push_back(nums[n-1]);
        // }


        // return ans;

        vector<int>ans;

        long long xor1=nums[0];
        for(int i=1;i<nums.size();i++){
            xor1^=nums[i];
        }

        int xor2=(xor1 & (xor1 - 1)) ^ xor1;
        int index;
        for(int i=0;i<32;i++){
            if((1<<i)==1){
                index=i;
                break;
            }
        }
        vector<int>bucket1;
        vector<int>bucket2;

        for(int i=0;i<nums.size();i++){
            if(nums[i]&xor2){
                bucket1.push_back(nums[i]);
            }
            else{
                bucket2.push_back(nums[i]);
            }
        }
        int xor3=bucket1[0];

        for(int i=1;i<bucket1.size();i++){
            xor3^=bucket1[i];

        }
        ans.push_back(xor3);
        int xor4=bucket2[0];
        for(int i=1;i<bucket2.size();i++){
            xor4^=bucket2[i];
        }
        ans.push_back(xor4);


        return ans;
    }
};