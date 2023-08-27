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
        int carry = 0;
        ListNode *prev = new ListNode(0);
        ListNode *ans = l1;
        while(l1 || l2  || carry){
            int left = l1 ? l1->val : 0;
            int right = l2 ? l2->val : 0;
            int sum =  left + right + carry;
            carry = sum >= 10 ? 1 : 0;
            sum = sum % 10;
            if(l1)
                l1->val = sum;
            else{
                ListNode *temp = new ListNode(sum);
                prev->next = temp;
                l1 = temp;
            }
            prev = l1;
            l1 = l1->next;
            if(l2)
                l2 = l2->next;

                
        }
        return ans;
    }
};