class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {

        if(1LL*m*k>bloomDay.size()){
            return -1;
        }

        int st=*min_element(bloomDay.begin(),bloomDay.end());
        
        int end=*max_element(bloomDay.begin(),bloomDay.end());

        // int mini=INT_MAX;

        while(st<=end){
            int mid=st+(end-st)/2;

            int freq=0;
            int ans=0;

            for(int i=0;i<bloomDay.size();i++){
                if(mid>=bloomDay[i]){
                    freq++;
                    if(freq==k){
                        ans++;
                        freq=0;

                    }
                }
                else{
                    freq=0;
                }
            }

            
            if(ans<m){
                st=mid+1;
            }
            // else if(ans==m){
            //     mini=min(mid,mini);
            //     end=mid-1;
            // }
            else{
                end=mid-1;
            }


        }

        return st;

    }
};