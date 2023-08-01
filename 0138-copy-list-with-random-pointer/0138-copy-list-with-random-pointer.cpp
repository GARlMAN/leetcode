/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* ans = NULL;
        map<Node*, Node*> hash;
        Node* ansBack = NULL;
        Node* temp = head;
        hash[NULL] = NULL;
        while(temp){
            Node* ansTemp = new Node(temp->val);
            hash[temp] = ansTemp;
            if(!ansBack){
                ans = ansTemp;
                ansBack = ansTemp;
                temp = temp->next;
                continue;
            }
            ansBack->next = ansTemp;
            ansBack = ansTemp;
            temp = temp->next;
               
        }
        temp = head;
        ansBack = ans;
        while(temp){

            ansBack->random = hash[temp->random];
            
            temp = temp->next;
            ansBack = ansBack->next;
        }
        
            
            
        return ans;
    }
};