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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* ans = NULL;
        ListNode* temp = NULL;
        int add = 0;
        while(temp2 && temp1){
            
            int sum = temp1->val + temp2->val;
            ListNode* anstemp = new ListNode();
            anstemp->val = add == 0 ? sum%10 : (sum + 1)%10;
            if((sum+add) > 9)
                add = 1;
            else
                add = 0;
            if(!ans){
                ans = anstemp;
                temp = ans;
            }
            else{
                temp->next = anstemp;
                temp = temp->next;
            }
            
            temp1 = temp1->next;
            temp2 = temp2->next;
        }

        if(temp1){
            int t = temp1->val;
            temp1->val = add == 0 ? temp1->val : (temp1->val + 1) % 10;
            temp->next = temp1;
            if(add != 0){
                add = t + 1 > 9 ? 1 : 0;
            }
            temp = temp->next;
        }
        else if(temp2){
            int t = temp2->val;
            temp2->val = add == 0 ? temp2->val : (temp2->val + 1) % 10;
            temp->next = temp2;
            if(add != 0){
                add = t + 1 > 9 ? 1 : 0;
            }
            temp = temp->next;
        }
        
        
        if(add != 0){

            while(temp->next && add != 0){
                 temp = temp->next;
                add = temp->val + 1 > 9 ? 1 : 0;
                temp->val = (temp->val + 1) % 10;
               
                }
            
            if(add != 0){
    
                    ListNode* anstemp = new ListNode();
                    anstemp->val = 1;
                    temp->next = anstemp;
     
            }
        }
        return ans;
        
    }
};