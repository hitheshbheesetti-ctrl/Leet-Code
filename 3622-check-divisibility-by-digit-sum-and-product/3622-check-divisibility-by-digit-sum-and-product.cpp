class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int product=1;
        int temp=n;

        while(temp>0){
            int num=temp%10;
            sum+=num;
            product*=num;
            temp/=10;
        }

        sum+=product;


        if(n%sum==0){
            return true;
        }



        return false;
        
    }
};