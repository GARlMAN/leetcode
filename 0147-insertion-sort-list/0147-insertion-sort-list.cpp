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
    ListNode* insertionSortList(ListNode* head) {
        ListNode* temp = head->next;

        while(temp){
            ListNode* key = temp;


            temp = temp->next;
            
            ListNode* start = head;
            ListNode* start_back = NULL;
            ListNode* end = NULL;
            
            while(start != key){
                if(start->val < key->val)
                    end = start;
                start_back = start;
                start = start->next;
                
            }
            if(start_back != NULL)
                start_back->next = key->next; 
            if(end == NULL){
                key->next = head;
                head = key;
            }
            else{
                key->next = end->next;
                end->next = key;       
            }

            
        }
        return head;
    }
};