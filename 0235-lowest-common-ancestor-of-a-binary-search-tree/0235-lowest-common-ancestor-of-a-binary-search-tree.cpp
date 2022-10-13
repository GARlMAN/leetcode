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
         solve(root, p, q);
        return ans;
    }
    
    void solve(TreeNode* root, TreeNode* p, TreeNode* q){
        if(p->val > root->val && q->val > root->val){
            solve(root->right, p, q);
        }
        else if(p->val < root->val && q->val < root->val){
            solve(root->left, p, q);
        }
        else
            ans = root;
            
    }
    
};