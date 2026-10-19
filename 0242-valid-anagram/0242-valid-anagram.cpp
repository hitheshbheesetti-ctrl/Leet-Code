class Solution {
public:
    bool isAnagram(string s, string t) {
        int n1=s.length();
        int n2=t.length();

        int hash1[26]={0};
        int hash2[26]={0};
        if(n1!=n2) return 0;

        for(int i=0;i<n1;i++){
            hash1[s[i]-'a']++;
            hash2[t[i]-'a']++;
        }

        for(int i=0;i<26;i++){
            if(hash1[i]!=hash2[i]){
                return 0;
            }
        }


        return 1;


        
    }
};