class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        int ans=0;

        int mini=INT_MAX;
        int n=intervals.size();
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(intervals[i][0]>intervals[j][0]){
        //             swap(intervals[i],intervals[j]);
        //         }
        //     }
        // }
        sort(intervals.begin(),intervals.end());
        priority_queue<int, vector<int>, greater<int>>pq;

        // for(int i=0;i<n;i++){
        //     if(intervals[i][0]==-1){
        //         continue;
        //     }
        //     ans++;
        //     intervals[i][0]=-1;
        //     int temp=intervals[i][1];
        //     for(int j=i+1;j<n;j++){
                
        //         if(temp<intervals[j][0]){
        //             temp=max(intervals[i][1],intervals[j][1]);
        //             intervals[j][0]=-1;
        //         }
        //     }
        // }


        for(int i=0;i<n;i++){
            int start=intervals[i][0];
            int end=intervals[i][1];

            if(!pq.empty() &&  start>pq.top()){
                pq.pop();
                
            }
            
            
            
            pq.push(end);
        }



        return pq.size();

       
        
        
        
    }
};