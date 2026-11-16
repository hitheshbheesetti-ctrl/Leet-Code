class Solution {
public:
    string digitSum(string s, int k) {


        while(!(s.length()<=k)){
            string temp="";
            string temp2="";
            int sum=0;
            for(int i=0;i<s.length();i++){
                temp+=s[i];
                sum+=(s[i]-'0');

                if(temp.size()==k){
                    temp2+=to_string(sum);
                    temp="";
                    sum=0;
                }
            }
            if(temp!=""){
                temp2+=to_string(sum);
            }
            s=temp2;
        }



        return s;
        
    }
};