class Solution {
public:
    int minAddToMakeValid(string s) {

        int n1=0;
        int n2=0;
        bool check=true;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                n1++;
            }
            else{
                if(n1>0){
                    n1--;

                }
                else{
                    n2++;
                }
            }

        }
        



        return n1+n2;
        
    }
};