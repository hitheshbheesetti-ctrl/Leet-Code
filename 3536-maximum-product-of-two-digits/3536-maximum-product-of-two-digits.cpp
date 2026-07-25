class Solution {
public:
    int maxProduct(int n) {
        int maxi=INT_MIN;

        int temp=n;
        int product=1;
        vector<int>ans;

        while(temp>0){
            ans.push_back(temp%10);
            temp=temp/10;


        }
        sort(ans.begin(),ans.end());

        return ans[ans.size()-2]*ans[ans.size()-1];
    }
};