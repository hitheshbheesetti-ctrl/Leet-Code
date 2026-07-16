class Solution {
public:

    long long gcd(long long n1,long long n2){
        if(n2==0){
            return n1;
        }

        return gcd(n2,n1%n2);
        

    }

    long long gcdSum(vector<int>& nums) {

        int n=nums.size();


        vector<int>prefixGcd;
        int maxi=nums[0];

        for(int i=0;i<n;i++){
            
            int mx=max(maxi,nums[i]);
            maxi=max(maxi,nums[i]);


            prefixGcd.push_back(gcd(nums[i],mx));

        }
        int maxii=INT_MIN;
        int minii=INT_MAX;

        
        for(int i=0;i<n;i++){
            maxii=max(nums[i],maxii);
            minii=min(nums[i],minii);

        }






        sort(prefixGcd.begin(),prefixGcd.end());

        long long st=0;
        long long end=prefixGcd.size()-1;
        long long sum=0;

        while(st<end){
            long long num1=prefixGcd[st];
            long long num2=prefixGcd[end];

            sum+=gcd(num1,num2);
            st++;
            end--;


        }




        return sum;





        
        




        
    }
};