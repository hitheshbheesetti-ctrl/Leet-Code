class Solution {
public:

    void check(int index,int n,vector<string>&ans,string s){
        if(index==n){
            
            ans.push_back(s);
            return;
        }
        if(index!=0 && s[index-1]=='0'){
            s+='1';
            check(index+1,n,ans,s);
            s.pop_back();
        }
        else{
            s+='0';
            check(index+1,n,ans,s);
            s.pop_back();
            s+='1';
            check(index+1,n,ans,s);
            s.pop_back();

        }

        
    }



    vector<string> validStrings(int n) {
        vector<string>ans;
        

        
        check(0,n,ans,"");



        

        

        return ans;
    }
};