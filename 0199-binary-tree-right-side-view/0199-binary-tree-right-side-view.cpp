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
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*> qu;
        vector<int> ans;
        if(!root)
            return ans;
        qu.push(root);
        while(!qu.empty()){
            int n = qu.size();
            for(int i = 0; i < n; ++i){
                TreeNode* temp = qu.front();
                if(temp->left)
                    qu.push(temp->left);
                if(temp->right)
                    qu.push(temp->right);
                if(i == n - 1)
                    ans.push_back(temp->val);
                qu.pop();
            }
        }
        return ans;
    }
};