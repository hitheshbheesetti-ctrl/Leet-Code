class Solution {
public:
    int minimumPushes(string word) {
        int n=word.length();


        int ans=0;
        if(n<8){
            return n;
        }
        else{
            ans=8;
            n=n-8;
            if(n<8){
                ans+=(n*2);
            }
            else{
                ans+=8*2;
                n=n-8;
                if(n<8){
                    ans+=(n*3);
                }
                else{
                    ans+=8*3;
                    n=n-8;
                    if(n<8){
                        ans+=(n*4);
                    }
                    else{
                        ans+=(8*4);
                        n=n-8;
                        if(n<8){
                            ans+=(n*5);
                        }
                        
                        
                    }
                }
            }

        }


        return ans;

        
    }
};