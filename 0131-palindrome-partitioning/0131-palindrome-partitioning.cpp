class Solution {
public:
    bool palindrome_check(string s,int start,int end){
        
        
        while(start<=end){
            if(s[start]!=s[end]){
                return false;
            }
            start++;
            end--;
        }


        return true;
        
    }


    void check(vector<vector<string>>&ans,vector<string>&temp,int index,string s){
        if(index==s.length()){
            ans.push_back(temp);
            return;
        }


        for(int i=index;i<s.length();i++){
            
            if(palindrome_check(s,index,i)){
                temp.push_back(s.substr(index,i-index+1));
                
                check(ans,temp,i+1,s);
                temp.pop_back();
                
            }
            

            
        }

        
    }
    


    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>temp;

        check(ans,temp,0,s);

        


        return ans;
    }
};