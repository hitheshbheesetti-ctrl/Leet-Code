class Solution {
public:
    int smallestNumber(int n, int t) {

        for(int i=n;;i++){
            int temp=i;
            int sum=1;

            
            while(temp>0){
                sum*=temp%10;
                temp=temp/10;

            }

            if(sum%t==0){
                return i;
            }
        }
        
    }
};