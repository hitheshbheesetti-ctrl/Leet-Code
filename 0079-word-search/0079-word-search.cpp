class Solution {
public:

    int m;
    int n;

    vector<vector<int>>direction={{1,0},{-1,0},{0,1},{0,-1}};

    bool check(int i,int j,vector<vector<char>>& board ,string &word,int idx){
        if(idx==word.length()){
            return true;
        }

        if(i<0 || j<0 || i>=m || j>=n || board[i][j]!=word[idx] || board[i][j]=='$'){
            return false;
        }

        char temp=board[i][j];

        board[i][j]='$';

        for(int k=0;k<direction.size();k++){
            int i_new=i+direction[k][0];
            int j_new=j+direction[k][1];


            if(check(i_new,j_new,board,word,idx+1)){
                return true;
            }
        }


        board[i][j]=temp;


        return false;



    }




    bool exist(vector<vector<char>>& board, string word) {
        m=board.size();
        n=board[0].size();

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                
                if(board[i][j]==word[0] && check(i,j,board,word,0)){
                    return true;
                    
                }
            }
        }


        return false;


    }
};