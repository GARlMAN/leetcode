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
    int kthSmallest(TreeNode* root, int k) {
        return solve(root, k);
    }
    int solve(TreeNode* root, int &k){
        if(!root){
            k--;
            return -1; 
        }

        int a = solve(root->left, k);
        if(k == 0){
            k--;
            return root->val;
        }

        int b = solve(root->right, k);
        return max(a, b);
    }
};