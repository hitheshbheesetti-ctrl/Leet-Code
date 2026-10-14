class Solution {
public:
    string maxSumOfSquares(int num, int sum) {


        string ans="";
        int temp=sum;
        // for(int i=0;i<num;i++){
            
        //     for(int j=9;j>=0;j--){
        //         if(temp-j>=0){
        //             temp=temp-j;
        //             ans+=(j+'0');
        //             break;
        //         }
                
                
        //     }

        // }

        for(int i=0;i<num;i++){

            if(temp>=9){
                ans+=(9+'0');
                temp-=9;
            }
            else{
                ans+=(temp+'0');
                temp=0;
            }
        }


        if(temp!=0){
            return "";
        }




        return ans;
        
    }
};