/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        queue<TreeNode*> qu;
        qu.push(root);
        while(!qu.empty()){
            int n = qu.size();
            for(int i = 0; i < n; ++i){
                TreeNode* temp = qu.front();
                //code to see if it's the lowest common ancestor
                if((temp->val <= p->val && temp->val >= q->val) || (temp->val <= q->val && temp->val >= p->val) )
                    return temp;
                
                //level order traversal 
                if(temp->left)
                    qu.push(temp->left);
                if(temp->right)
                    qu.push(temp->right);
                qu.pop();
            }
                
        }
        return root;
    }
};