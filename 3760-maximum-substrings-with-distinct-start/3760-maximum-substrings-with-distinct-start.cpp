class Solution {
public:
    int maxDistinct(string s) {

        vector<int>hash(26,0);
        int ans=0;

        for(int i=0;i<s.length();i++){
            hash[s[i]-'a']++;
        }

        for(int i=0;i<26;i++){
            if(hash[i]>0){
                ans++;
            }
        }

        
        return ans;


        
    }
};