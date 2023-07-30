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
    ListNode* reverseList(ListNode* head) {
        if(!head)
            return head;
        ListNode* st = NULL;
        ListNode*  mid = head;
        ListNode* ed = head->next;
        while(mid){
            mid->next = st;
            st = mid;
            mid = ed;
            if(ed)
                ed = ed->next;
        }
        return st;
        
    }
};