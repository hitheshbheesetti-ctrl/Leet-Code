class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();

        int st=*max_element(nums.begin(),nums.end());
        int end=0;


        for(int i=0;i<nums.size();i++){
            end+=nums[i];
        }

        if(end==0){
            return 0;
        }

        int mid=st+(end-st)/2;


        while(st<=end){
            mid=st+(end-st)/2;
            int temp=0;
            int number=0;

            for(int j=0;j<nums.size();j++){
                temp+=nums[j];

                if(temp>mid){
                    temp=nums[j];
                    number++;

                }
                else if(temp==mid){
                    temp=0;
                    number++;
                }

            }
            if(temp>0){
                number++;
            }

            if(number<=k){
                end=mid-1;
            }
            else{
                st=mid+1;
            }


        }



        return st;


           

        
    }
};