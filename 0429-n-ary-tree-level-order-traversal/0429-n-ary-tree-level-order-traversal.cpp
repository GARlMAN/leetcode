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
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        if(!root)
            return ans;
        queue <Node*> qu;
        qu.push(root);
        
        while(!qu.empty()){
            int size = qu.size();
            vector<int> a;
            for(int i = 0; i < size; ++i){
                Node* temp = qu.front();
                a.push_back(temp->val);
                for(int i = 0; i < (temp->children).size(); ++i)
                    qu.push(temp->children[i]);
                qu.pop();
                    
            }
            ans.push_back(a);
        }
        return ans;
    }
};