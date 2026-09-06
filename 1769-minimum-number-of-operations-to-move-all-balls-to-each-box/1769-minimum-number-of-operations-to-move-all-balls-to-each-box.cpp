class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int>ans;

        for(int i=0;i<boxes.size();i++){
            int num=0;

            for(int j=0;j<boxes.length();j++){
                if(boxes[j]=='1'){
                    num+=abs(j-i);
                }
            }

            ans.push_back(num);
        }


        return ans;

        
    }
};