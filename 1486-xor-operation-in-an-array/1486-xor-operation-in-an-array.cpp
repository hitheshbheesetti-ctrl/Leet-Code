class Solution {
public:
    int xorOperation(int n, int start) {
        
        int sum=0;

        
        vector<int>arr;

        for(int i=0;i<n;i++){
            arr.push_back(start+2*i);
        }

        for(int i=0;i<arr.size();i++){
            sum^=arr[i];
        }


        return sum;
        
    }
};