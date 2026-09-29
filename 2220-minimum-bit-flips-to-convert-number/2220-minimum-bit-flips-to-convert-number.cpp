class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans=0;

        // approach1
        // for(int i=0;i<32;i++){
        //     if((start&(1<<i))!=(goal&(1<<i))){
        //         ans++;
        //     }

        // }

        int numb=start^goal;
        
        for(int i=0;i<32;i++){
            
            ans+=(numb&1);
            numb=numb>>1;
        }
        


        return ans;
    }
};