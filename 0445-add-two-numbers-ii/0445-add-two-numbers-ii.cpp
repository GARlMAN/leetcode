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
        stack <ListNode*> st1;
        stack <ListNode*> st2;
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        while(temp1 || temp2){
            if(temp1){
                st1.push(temp1);
                temp1 = temp1->next;
            }
            if(temp2){
                st2.push(temp2);
                temp2 = temp2->next;
            }
        }
        int carry = 0;
        ListNode* ans = st1.size() > st2.size() ? l1 : l2;
        while(!st1.empty() || !st2.empty()){
            if(!st1.empty() && !st2.empty()){
                temp1 = st1.top();
                temp2 = st2.top();
                st1.pop();
                st2.pop();
                temp1->val = temp1->val +carry;
                int sum = temp1->val + temp2->val;
                carry = 0;
                carry = sum > 9 ? 1 : 0;
                sum = sum % 10;
                
                if(st1.size() > st2.size())
                    temp1->val = sum;
                else
                    temp2->val = sum;
                    }
            else if(!st1.empty() && st2.empty()){
                temp1 = st1.top();
                st1.pop();
                if(carry == 0)
                    return l1;
                int sum = temp1->val + 1;
                temp1->val = sum % 10;
                carry = 0;
                carry = sum > 9 ? 1 : 0;
                
            }
            else if(st1.empty() && !st2.empty()){
                temp2 = st2.top();
                st2.pop();
                if(carry == 0)
                    return l2;
                int sum = temp2->val + 1;
                temp2->val = sum % 10;
                carry = 0;
                carry = sum > 9 ? 1 : 0;
                
            }
                
        }
        if(carry == 1){
            ListNode* another = new ListNode();
            another->val = 1;
            another->next = ans;
            return another;
        }
            
        
        return ans;
    }
};