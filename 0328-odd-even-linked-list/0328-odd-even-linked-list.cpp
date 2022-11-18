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
    ListNode* oddEvenList(ListNode* head) {
        if(!head)
            return head;
        ListNode* temp = head;
        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* even1 = head->next;
        int s = 1;
        while(temp){
            ListNode* j = temp;
            cout << s << endl;
            temp = temp->next;
            
            if(s!= 2 && s%2 == 0){
                j->next = NULL;
                even->next = j;
                even = even->next;
            }
            else if(s!= 1 && s%2 == 1){
                j->next = odd->next;
                odd->next = j;
                odd = odd->next;
                
            }
            
            s++;
            
        }
        if(s == 4)
            even1->next = NULL;
 
\
        return head;
    }
};