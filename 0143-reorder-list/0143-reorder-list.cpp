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
    void reorderList(ListNode* head) {
        ListNode* temp = head;
        stack<ListNode*> st;
        int count = 0;
        while(temp){
            
            st.push(temp);
            temp = temp->next;
            count++;
        }

        temp = head;
        for(int i = 0; i <  count/2; ++i){
            ListNode* t = temp->next;
            temp->next = st.top();
            st.pop();
            temp->next->next = t;
            temp = temp->next->next;
            if(i ==  count/2 - 1)
                temp->next = NULL;
        }


    }
};