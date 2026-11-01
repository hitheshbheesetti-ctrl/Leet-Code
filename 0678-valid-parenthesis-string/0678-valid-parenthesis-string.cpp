class Solution {
public:
    // bool is_valid(string s){
    //     int ans=0;
    //     for(int i=0;i<s.length();i++){
    //         if(s[i]=='('){
    //             ans++;
    //         }
    //         else if(s[i]==')'){
    //             ans--;
    //         }
    //         if(ans<0){
    //             return false;
    //         }
    //     }


    //     return ans==0;
    // }

    // void check(int i,string s,string temp,vector<string>&str){
    //     if(i==s.length()){
    //         str.push_back(temp);
    //         return;
    //     }

    //     if(s[i]=='*'){
    //         temp+='(';
    //         check(i+1,s,temp,str);
    //         temp.pop_back();
    //         temp+=')';
    //         check(i+1,s,temp,str);
    //         temp.pop_back();
    //         check(i+1,s,temp,str);
    //     }
    //     else{
    //         temp+=s[i];
    //         check(i+1,s,temp,str);
    //     }
    // }



    bool checkValidString(string s) {
        // int ans=0;
        // int temp=0;
        // vector<string>str;
        
        // check(0,s,"",str);


        // for(int i=0;i<str.size();i++){
        //     if(is_valid(str[i])){
        //         return true;
        //     }
        // }

        int mini=0;
        int maxi=0;

        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                mini=mini+1;
                maxi=maxi+1;
            }
            else if(s[i]==')'){
                mini=mini-1;
                maxi=maxi-1;
            }
            else{
                mini=mini-1;
                maxi=maxi+1;
            }

            if(mini<0){
                mini=0;
            }
            
            if(maxi<0){
                return false;
            }
        }


        
        return mini==0;
    }
};