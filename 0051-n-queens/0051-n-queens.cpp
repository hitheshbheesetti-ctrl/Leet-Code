class Solution {
public:

    bool ischeck(int row,int col,int n,vector<vector<string>>&ans,vector<string>&s){

        for(int i=0;i<n;i++){
            
            if(s[row][i]=='Q'){
                return false;
            }

        }

        for(int i=0;i<n;i++){

            if(s[i][col]=='Q'){
                return false;
            }
        }

        int temp1=row;
        int temp2=col;

        while(temp1>=0 && temp2>=0){
            if(s[temp1][temp2]=='Q'){
                return false;
            }

            temp1--;
            temp2--;

        }

        temp1=row;
        temp2=col;

        while(temp1>=0 && temp2<n){
            if(s[temp1][temp2]=='Q'){
                return false;
            }

            temp1--;
            temp2++;

        }



        return true;




    }


    void queens(vector<vector<string>>&ans,int index,int n, vector<string>&s){

        if(index==n){
            
            
            ans.push_back(s);
            return;
        }
        
       



        for(int i=0;i<n;i++){

            if(ischeck(index,i,n,ans,s)){
                s[index][i]='Q';
                queens(ans,index+1,n,s);
                s[index][i]='.';
            }
           
        }
        

        

    }
    



    vector<vector<string>> solveNQueens(int n) {


        
        
        vector<string>s(n,string(n,'.'));
        vector<vector<string>>ans;

        queens(ans,0,n,s);




        return ans;

      
        
        
    }
};