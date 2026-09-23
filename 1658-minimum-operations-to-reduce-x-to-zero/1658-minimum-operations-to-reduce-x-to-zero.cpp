class Solution {
public:


    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        vector<int>prefix1(n,0);
        vector<int>prefix2(n,0);
        vector<int>temp=nums;
        reverse(temp.begin(),temp.end());

        prefix1[0]=nums[0];
        prefix2[0]=temp[0];


        for(int i=1;i<nums.size();i++){
            prefix1[i]=prefix1[i-1]+nums[i];
            
            prefix2[i]=prefix2[i-1]+temp[i];

        }
        int ans=INT_MAX;
        int st=0;
        int end=n-1;

        while(st<=end){
            int mid=st+(end-st)/2;

            if(prefix2[mid]==x){
                ans=min(mid+1,ans);
                break;
            }

            else if(prefix2[mid]>x){
                end=mid-1;
            }

            else{
                st=mid+1;
            }

        }
        for(int i=0;i<nums.size();i++){
            int leftsum=prefix1[i];
            int rightsum=x-leftsum;
            if(leftsum>x){
                break;
            }
            if(rightsum==0){
                ans=min(i+1,ans);
            }

            int st=0;
            int end=n-i-2;
            int mid;

            while(st<=end){
                mid=st+(end-st)/2;

                if(prefix2[mid]==rightsum){
                    ans=min(mid+2+i,ans);
                    break;
                    
                }
                else if(prefix2[mid]>rightsum){
                    end=mid-1;
                }
                else{
                    st=mid+1;
                }
            }
            
        }

        if(ans!=INT_MAX){
            return ans;
        }



        return -1;

        



        
        
    }
};