class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string ans="";
        string s="";
        int maxi=INT_MIN;

        int mini=INT_MAX;

        for(int i=0;i<strs.size();i++){
            if(strs[i].size()<mini){
                mini=strs[i].size();
            }
        }

        for(int i=0;i<mini;i++){
            int num=1;

            for(int j=1;j<strs.size();j++){
                if(strs[0][i]==strs[j][i]){
                    num++;

                }
            }

            if(num==strs.size()){
                s+=strs[0][i];
                
            }
            else{
                
                return s;
            }
        }



        
       
        return s;
    }
};