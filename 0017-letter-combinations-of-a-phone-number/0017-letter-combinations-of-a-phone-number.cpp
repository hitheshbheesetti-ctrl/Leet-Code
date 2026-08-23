class Solution {
public:


    void check(int ind,string s,vector<string>&ds,string digits,int n,map<int,string>&mp){
        if(s.length()==n){

            ds.push_back(s);
            return;

        }

        

        
        for(int i=0;i<mp[digits[ind]-'0'].size() ;i++){
            s+=mp[digits[ind]-'0'][i];
            
            check(ind+1,s,ds,digits,n,mp);

            
            s.pop_back();
        }


    }




    vector<string> letterCombinations(string digits) {

        vector<string>ds;
       
        map<int,string>mp;
        mp[2]="abc";
        mp[3]="def";
        mp[4]="ghi";
        mp[5]="jkl";
        mp[6]="mno";
        mp[7]="pqrs";
        mp[8]="tuv";
        mp[9]="wxyz";
        int n=digits.size();


        
        check(0,"",ds,digits,n,mp);




        return ds;


        
    }
};