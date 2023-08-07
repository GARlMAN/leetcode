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
    bool solve(TreeNode* root, TreeNode* subRoot){
        if(!root && !subRoot)
            return true;
        else if(!root || !subRoot || root->val != subRoot->val)
            return false;
        return min(solve(root->left, subRoot->left), solve(root->right, subRoot->right));
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) { 
        if(!root)
            return false;
        bool temp = false;
        if(root->val == subRoot->val)
             temp =  solve(root, subRoot);
        return max(temp, max(isSubtree(root->left, subRoot), isSubtree(root->right, subRoot)));
    }
};