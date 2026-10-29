class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n=intervals.size();
        int num=newInterval[0];
        vector<vector<int>>ans;
        int st=0;
        
        int index=-1;
        
        
        bool check=false;

        for(int i=0;i<n;i++){
            if(intervals[i][0]<=newInterval[0] && intervals[i][1]>=newInterval[0]){
                newInterval[0]=intervals[i][0];
                newInterval[1]=max(intervals[i][1],newInterval[1]);
                check=true;
                
            }
            else if(intervals[i][0]>=newInterval[0] && intervals[i][0]<=newInterval[1]){
                
                newInterval[1]=max(intervals[i][1],newInterval[1]);
                check=true;

            }
            
            else{
                // if(check==true){
                //     ans.push_back(newInterval);
                //     check=false;
                // }
                ans.push_back(intervals[i]);

            }
        }
        int end=ans.size()-1;
        while(st<=end){
            int mid=st+(end-st)/2;

            if(ans[mid][0]>=num){
                index=mid;
                end=mid-1;


            }
            else{
                st=mid+1;
            }
        }
        if(index==-1){
            ans.push_back(newInterval);
            return ans;

        }
        ans.insert(ans.begin()+index,newInterval);

        
        return ans;


        
    }
};