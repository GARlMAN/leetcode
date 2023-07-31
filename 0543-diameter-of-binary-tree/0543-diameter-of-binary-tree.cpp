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
    int ans = 1;
    int diameterOfBinaryTree(TreeNode* root) {
        solve(root);
        return ans - 1;
    }
    int solve(TreeNode* root){
        if(!root)
            return 0;
        int a = solve(root->left);
        int b = solve(root->right);
        ans = max(ans, a + b + 1); 
        return 1 + max(a, b);
    }
};