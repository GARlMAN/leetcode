/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    
    vector<int> ans;
    vector<int> postorder(Node* root) {
        solve(root);
        reverse(ans.begin(), ans.end());
        return ans;
    }
    
    void solve(Node* root){
        if(!root)
            return; 
            
        ans.push_back(root->val);  
        for(int i = (root->children).size() - 1; i >=0; --i){
            solve(root->children[i]);
        }
        
    }
};