class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        int ans=0;
        unordered_set<int>arr(nums.begin(),nums.end());
        int len=0;
        for(auto x:arr){
            if(arr.find(x-1)!=arr.end()){
                continue;
            }
            else{
                int cnt=1;

                while(arr.find(x+1)!=arr.end()){
                    x++;
                    cnt++;
                }
                ans=max(cnt,ans);
            }

        }



        return ans;
        
    }
};