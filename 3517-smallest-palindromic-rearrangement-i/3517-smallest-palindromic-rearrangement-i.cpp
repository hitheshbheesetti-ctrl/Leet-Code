class Solution {
public:
    string smallestPalindrome(string s) {

        int arr[26]={0};
        if(s.length()==1){
            return s;
        }

        for(int i=0;i<s.length();i++){
            arr[s[i]-'a']++;
        }

        string ans_front="";
        string ans_back="";
        char ch='\0';
        
       

        for(int i=0;i<26;i++){
            int f=arr[i];
            

            if(arr[i]!=0){
            
                string front=string(f/2,i+'a');
                string back=string(f/2,i+'a');

                if(f%2>0){
                    ans_front+=front;
                    ans_back+=back;
                    ch=i+'a';
                }
                else{
                    ans_front+=front;
                    ans_back+=back;
                }
            }

            
        }
        reverse(ans_back.begin(),ans_back.end());
        if(ch){
            ans_front+=ch;
        }
       
        

        ans_front+=ans_back;

    


        
        
        return ans_front;

       


        

        
    }
};