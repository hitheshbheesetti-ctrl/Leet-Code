class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int>arr1;
        vector<int>arr2;

        arr1.push_back(nums[0]);         
        arr2.push_back(nums[1]);    
        int n=2;     
        
        
        
        while(n<nums.size()){
            if(arr1[arr1.size()-1]>arr2[arr2.size()-1]){
                arr1.push_back(nums[n]);
                

            }
            else{
                arr2.push_back(nums[n]);
                
            }


            n++;


        }

        for(int i=0;i<arr2.size();i++){
            arr1.push_back(arr2[i]);
        }



        return arr1;


         
    }
};