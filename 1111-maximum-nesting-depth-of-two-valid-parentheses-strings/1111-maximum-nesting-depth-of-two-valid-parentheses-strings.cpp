class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {

        int depth=0;

        vector<int>arr(seq.length(),0);

        for(int i=0;i<seq.length();i++){
            if(seq[i]=='('){
                depth++;
                arr[i]=depth%2;
            }
            else{
                arr[i]=depth%2;
                depth--;
            }
        }



        return arr;


        
    }
};