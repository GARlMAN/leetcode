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
    int count = 0;
    int goodNodes(TreeNode* root) {

        solve(root, INT_MIN);
        return count;
    }
    void solve(TreeNode* root, int largest){
        if(!root)
            return;
        if(root->val >= largest)
            count++;
        solve(root->right,  max(root->val, largest));
        solve(root->left,  max(root->val, largest));
    }
};