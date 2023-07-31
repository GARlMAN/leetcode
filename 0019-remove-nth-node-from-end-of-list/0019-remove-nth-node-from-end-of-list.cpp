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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        ListNode* delay = head;
        ListNode* back = NULL;
        int count = 0;
        if(!head)
            return head;
        while(temp){
            temp = temp->next;
            if(count >= n){
                back = delay;
                delay = delay->next;
            }
            count++;
        }
        if(!back)
            return delay->next;
        
        back->next = delay->next;
        return head;
    }
};