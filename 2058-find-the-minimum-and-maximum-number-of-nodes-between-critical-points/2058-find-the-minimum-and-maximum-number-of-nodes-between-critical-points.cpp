/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* temp=head;
        if(temp==NULL || temp->next==NULL ){
            return {-1,-1};
        }
        vector<int>num;
        int i=1;

        while(temp->next->next!=NULL){
            if(temp->val<temp->next->val && temp->next->val>temp->next->next->val){

                num.push_back(i);
                

            }
            else if(temp->val>temp->next->val && temp->next->val<temp->next->next->val){
                
                num.push_back(i);


            }
            i++;
            temp=temp->next;
        }

        if(num.size()==0 || num.size()==1){
            return {-1,-1};
        }

        
        int min2=INT_MAX;
        // int maxi=*max_element(num.begin(),num.end());
        // int min1=*min_element(num.begin(),num.end());

        vector<int>ans;
       


        for(int i=1;i<num.size();i++){

            

            if(num[i]-num[i-1]<min2){
                min2=num[i]-num[i-1];
            }
            

        }


        ans.push_back(min2);
        ans.push_back(num[num.size()-1]-num[0]);


        return ans;


        
        
    }
};