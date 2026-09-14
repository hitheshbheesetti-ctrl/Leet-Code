class Solution {
public:
    int maxFreqSum(string s) {
        
        vector<int>hash(26,0);
        int max1=0;
        int max2=0;

        for(int i=0;i<s.length();i++){
            hash[s[i]-'a']++;
        }

        for(int i=0;i<26;i++){
            if(i=='a'-'a' || i=='e'-'a' || i=='i'-'a' || i=='o'-'a' || i=='u'-'a'){
                max1=max(hash[i],max1);
            }
            else{
                max2=max(hash[i],max2);
            }
            
            


        }
        


        return max1+max2;

        
        
    }
};