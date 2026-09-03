class Solution {
public:
    bool uniformArray(vector<int>& nums1) {

        
        int n1=0;
        int n2=0;


        int smallestodd=INT_MAX;

        for(int i=0;i<nums1.size();i++){
            if(nums1[i]%2!=0){
                smallestodd=min(nums1[i],smallestodd);
            }

        }


        for(int i=0;i<nums1.size();i++){
            if(nums1[i]%2==0){
                
                n1++;

                int num=nums1[i]-smallestodd;

                if(num%2!=0 && num>=1){
                    n2++;
                }

                

            }
            else{
                n2++;

                int num=nums1[i]-smallestodd;

                if(num%2==0 && num>=1){
                    n1++;
                }

                
            }
            
        }


        if(n1==nums1.size() ||   n2==nums1.size()){
            return true;
        }

        else{
            return false;
        }




        
    }
};