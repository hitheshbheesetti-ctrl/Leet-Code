class Solution {
public:
    int maxDepth(string s) {
        int n=s.length();
        int maxi=0;
        int sum=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                sum++;
                maxi=max(sum,maxi);
            }
            else if(s[i]==')'){
                sum--;
            }
        }


        return maxi;
        
    }
};