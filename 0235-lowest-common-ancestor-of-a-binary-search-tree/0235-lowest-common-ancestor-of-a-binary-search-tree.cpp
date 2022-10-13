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
    TreeNode* ans;
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
         
        return solve(root, p, q);
    }
    
    TreeNode* solve(TreeNode* root, TreeNode* p, TreeNode* q){
        if(p->val > root->val && q->val > root->val){
            return solve(root->right, p, q);
        }
        else if(p->val < root->val && q->val < root->val){
            return solve(root->left, p, q);
        }
        else
            return root;
            
    }
    
};