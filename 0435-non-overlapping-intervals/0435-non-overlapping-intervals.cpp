class Solution {
public:

    static bool check(vector<int>&a,vector<int>&b){
        return a[1]<b[1];
        
    }

    int eraseOverlapIntervals(vector<vector<int>>& intervals) {

        
        int n=intervals.size();
        if(n==0){
            return 0;
        }
        sort(intervals.begin(),intervals.end(),check);
        int ans=0;
        int prev=intervals[0][1];

        for(int i=1;i<n;i++){
            if(prev<=intervals[i][0]){
                prev=intervals[i][1];
                continue;
            }
            else{
                ans++;
                
            }

        }



        return ans;

        
        
    }
};