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
    ListNode* removeElements(ListNode* head, int val) {
        if(!head)
            return head;
        

        ListNode* temp = head;
        ListNode* forward = NULL;
        while(temp){

            if(temp->val == val){

                if(temp == head)
                    head = temp->next;
                else
                    forward->next = temp->next;
            }
            else
                forward = temp;
            temp = temp->next;                    
            

            
        }
        return head;
    }
};