class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {

        vector<int>ans;
        vector<int>hash(101,0);


        for(int i=0;i<friends.size();i++){
            hash[friends[i]]++;

        }
        
        for(int i=0;i<order.size();i++){
            if(hash[order[i]]){
                ans.push_back(order[i]);
            }
        }
        
        return ans;

    }
};