class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>ans;
        __int128 temp1=1;
        __int128 temp2=1;
        ans.push_back(1);
        rowIndex++;



        for(int i=1;i<=(rowIndex-1)/2;i++){
            temp1*=(rowIndex-i);
            temp2*=i;
            ans.push_back(temp1/(temp2));
        }

        vector<int>rev=ans;
        if(rowIndex%2!=0){
            rev.pop_back();
            
            
        }
        reverse(rev.begin(),rev.end());
        
        
        for(int i=0;i<rev.size();i++){
            ans.push_back(rev[i]);
        }



        return ans;
    }
};