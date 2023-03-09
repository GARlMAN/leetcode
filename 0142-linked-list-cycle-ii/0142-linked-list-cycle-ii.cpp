/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *temp = head;
        ListNode *fastTemp = head;
        ListNode *entry = head;
        
        while(fastTemp && fastTemp->next){
            temp = temp->next;
            fastTemp = fastTemp->next->next;
            if(temp == fastTemp){
                while(entry != temp){
                    entry = entry->next;
                    temp = temp->next;
                }
                return entry;
            }
        }
        return NULL;
    }
};