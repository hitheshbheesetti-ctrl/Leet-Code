class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<int>ans;


        for(int i=0;i<grid.size();i++){

            for(int j=0;j<grid[0].size();j++){

                ans.push_back(grid[i][j]);
            }
        }





        
        for(int i=0;i<k;i++){
            int num=ans[ans.size()-1];
            ans.pop_back();
            ans.insert(ans.begin(),num);
        }
        int num=0;

        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                grid[i][j]=ans[num];
                num++;

            }
        }






        return grid;
        
    }
};