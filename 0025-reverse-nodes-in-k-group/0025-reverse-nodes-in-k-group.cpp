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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* top = NULL;
        while(temp){
            int count = 0;
            //assingin the top to next values to avoid a loop
            stack<ListNode*> st;
            if(top && top->next == NULL)
                top->next = temp;
            //loadign all values in the stack to reverse em    
            while(temp && count < k){
                st.push(temp);
                temp = temp->next;
                count++;
            }
            
            if(count != k)
                break;
            //pointing to the reversed values
            while(!st.empty()){
                if(top == NULL){
                    head = st.top();
                    head->next = st.top();
                    top = head;
                }
                    
                else{

                    top->next = st.top();
                    top = top->next;             
                }
                
                st.pop();
                //loop edge case
                if(st.empty())
                    top->next = NULL;
            }
            
            
        }
        return head;
    }
};