class Solution {
public:
    int reverseDegree(string s) {
        int ans=0;

        for(int i=0;i<s.length();i++){
            ans+=abs(26-(s[i]-'a'))*(i+1);

        }
        


        return ans;

    }
};