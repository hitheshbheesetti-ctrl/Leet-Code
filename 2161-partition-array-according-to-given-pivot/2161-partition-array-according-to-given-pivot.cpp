class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {


        
        vector<int>num1;
        vector<int>num2;
        int num=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot){
                num1.push_back(nums[i]);
            }
            else if(nums[i]>pivot){
                num2.push_back(nums[i]);
            }
            else{
                num++;

            }
        }

        for(int i=0;i<num;i++){
            num1.push_back(pivot);
        }
        
        

        for(int i=0;i<num2.size();i++){
            num1.push_back(num2[i]);
        }




        return num1;
        
    }
};