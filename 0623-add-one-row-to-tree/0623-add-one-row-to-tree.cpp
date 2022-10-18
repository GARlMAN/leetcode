/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        queue<TreeNode*> qu;
        if(!root)
            return root;
        if(depth == 1){
            TreeNode* new_node_left = new TreeNode();
            new_node_left->val = val;
            new_node_left->left = root;
            new_node_left->right = NULL;
            return new_node_left;
        }
            
        int d = 1;
        qu.push(root);
        while(!qu.empty() && d <= depth){
            int n = qu.size();
            for(int i = 0; i < n; ++i){
                TreeNode* temp = qu.front();
                if(d == depth - 1){
                     
                         TreeNode* new_node_left = new TreeNode();
                         new_node_left->left = temp->left;
                         new_node_left->val = val;    
                        temp->left = new_node_left;
                         cout << d << endl;
                     
                 
                         TreeNode* new_node_right = new TreeNode();
                         new_node_right->right = temp->right;
                         new_node_right->val = val;    
                        temp->right = new_node_right;
                         cout << d << endl;
                     
                    
                }
                
                if(temp->left)
                    qu.push(temp->left);
                if(temp->right)
                    qu.push(temp->right);
                qu.pop();
            }
            d++;
        }
        return root;
    }
};