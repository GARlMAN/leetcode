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
    int rob(TreeNode* root) {
        vector<int> ans = solve(root);
        return max(ans[0], ans[1]);
    }
    
    vector<int> solve(TreeNode* root){
        vector<int> a(2, 0);
        if(!root)
            return a;
        vector<int> left = solve(root->left);
        vector<int> right = solve(root->right);
        a[0] = root->val + left[1] + right[1];
        a[1] = max(left[0], left[1]) + max(right[0], right[1]);
            return a;
        
    }
};