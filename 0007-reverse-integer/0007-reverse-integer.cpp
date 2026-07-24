class Solution {
public:
    int reverse(int x) {
        int sign=0;
        if(x==INT_MIN){
            return 0;
        }
        if(x<0){
            x=x*(-1);
            sign++;

        }

        int temp=x;
        int num=0;
        while(temp>0){
            if(num>INT_MAX/10 ){
                return 0;
            }
            
            num=temp%10+num*10;
            
            temp=temp/10;

        }




        
        if(sign){
            num=num*(-1);
        }



        return num;
    }
};