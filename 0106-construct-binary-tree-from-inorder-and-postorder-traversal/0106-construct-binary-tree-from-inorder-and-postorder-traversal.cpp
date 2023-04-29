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
    TreeNode* solve(vector<int>& inorder, int inorder_start, int inorder_end,  vector<int>& postorder, int postorder_start, int postorder_end){
        TreeNode *root = new TreeNode();
        
        if(postorder_start > postorder_end || inorder_start > inorder_end)
            return nullptr;
        
        // cout << inorder_start << " " << inorder_end << endl;
        // cout << postorder_start << " " << postorder_end << endl;
        // cout << endl;
        root->val = postorder[postorder_end];
        
            
        
        for(int i = inorder_start; i <= inorder_end; ++i){
            if(root->val == inorder[i]){
                int numLeft = i - inorder_start;
                TreeNode *left = solve(inorder, inorder_start, i - 1, postorder, postorder_start,  numLeft + postorder_start - 1);
                
                TreeNode *right = solve(inorder, i + 1, inorder_end, postorder, numLeft+ postorder_start, postorder_end - 1);
                root->left = left;
                root->right = right;
                return root;
                
                
            }
        }
        
        
        return root;
        
        
        
    }
    
    
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return solve(inorder, 0, inorder.size() - 1, postorder, 0, postorder.size() - 1);
    }
};