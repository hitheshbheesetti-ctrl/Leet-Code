class Solution {
public:
    int scoreOfString(string s) {
        int ans=0;




        
        for(int i=1;i<s.length();i++){
            char st=s[i-1];
            char end=s[i];
            int num=abs(st-end);
            
            ans+=num;
        }
        return ans;
        
    }
};