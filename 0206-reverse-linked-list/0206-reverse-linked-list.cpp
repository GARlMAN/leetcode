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
        stack <ListNode*> st;
        if(!head)
            return head;
        ListNode* temp = head;
        st.push(NULL);
    
        while(temp){
            st.push(temp);
            temp = temp->next;
        }
            
        head = st.top();
        
        while(st.top() != NULL){
            ListNode* temp = st.top();
            st.pop();
            temp->next = st.top();
        }
        
        return head;
    }
};