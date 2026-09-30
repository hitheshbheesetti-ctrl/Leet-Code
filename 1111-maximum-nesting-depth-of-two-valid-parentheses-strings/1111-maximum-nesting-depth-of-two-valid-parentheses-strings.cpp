class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {

        int depth=0;

        vector<int>arr(seq.length(),0);

        for(int i=0;i<seq.length();i++){
            if(seq[i]=='('){
                depth++;
                if(depth%2==0){
                    arr[i]=1;
                }
                
            }
            else{
                if(depth%2==0){
                    arr[i]=1;
                }
                
                depth--;
            }
        }



        return arr;


        
    }
};