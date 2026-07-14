class Solution {
public:

    


     

    int myAtoi(string s) {
        int n=s.length();
        signed int ans=0;
        
        int num=0;
        bool temp=false;
        int temp1=0;
        
        for(int i=0;i<s.length();i++){
            
            
            
            if(s[i]>='0' && s[i]<='9'){
                int digit=s[i]-'0';
                
                if(num>INT_MAX/10 || (num==INT_MAX/10 && digit>7)){
                    if(temp){
                        return INT_MIN;
                    }
                    return INT_MAX;
                }
                num=num*10+(s[i]-'0');    
            
            
                temp1=1;
            }
            else if(s[i]=='-' && temp1==0){
                temp1=1;
                temp=true;
            }
            else if((s[i]==' ' ||s[i]=='+') && temp1==0){
                if(s[i]=='+'){
                    temp1=1;

                }
                continue;
                
            }
            else{
                break;
            }

        }
        if(temp){
            num=-num;
        }





        return num;


        
    }
};