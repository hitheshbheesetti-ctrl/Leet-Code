class Solution {
public:
    int minimumPushes(string word) {
        vector<int>arr(26,0);
        

        for(int i=0;i<word.length();i++){
            arr[word[i]-'a']++;
        
        }
        
        
        
        sort(arr.begin(),arr.end());
        reverse(arr.begin(),arr.end());



        
        
        int num=1;
        int ans=0;


        for(int i=0;i<26;i++){
            if(num<=8){
                ans+=(1*arr[i]);

            }
            else{
                float numb=(float)num/8;
                if(numb>1 && numb<=2){
                    ans+=(2*arr[i]);
                }
                else if(numb>2 && numb<=3){
                    ans+=(3*arr[i]);
                }
                else if(numb>3 && numb<=4){
                    ans+=(4*arr[i]);
                }
            }

            num++;
        }


        
        return ans;






















        

    }
};