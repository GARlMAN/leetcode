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
    int findBottomLeftValue(TreeNode* root) {
        int left;
        if(!root)
            return left;
        left = root->val;
        queue <TreeNode*> qu;
        qu.push(root);
        while(!qu.empty()){
            cout << qu.front()->val << endl;
            left = qu.back()->val;
            int val = qu.size();
            for(int i = 0; i < val; ++i){
                TreeNode* temp = qu.front();
                // cout << temp->val << endl;
                if(temp->right)
                    qu.push(temp->right);
                if(temp->left)
                    qu.push(temp->left);
                qu.pop();
            }
        }
        return left;
    }
};