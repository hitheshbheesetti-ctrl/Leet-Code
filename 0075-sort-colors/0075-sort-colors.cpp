// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         vector<int>nums1;
//         for(int i=0;i<=2;i++){
//             for(int j=0;j<nums.size();j++){
//                 if(nums[j]==i){
//                     nums1.push_back(nums[j]);
                    
//                 }
//             }
//         }
//         nums=nums1;
        
//     }
// };
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size()-1;
        while(mid <= high){
            if(nums[mid] == 0){
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else{
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};