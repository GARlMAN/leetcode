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
    vector<int> largestValues(TreeNode* root) {
        vector <int> ans;
        if(!root)
            return ans;
        queue <TreeNode*> qu;
        qu.push(root);
        while(!qu.empty()){
            int max_ans = qu.front()->val;
            int val = qu.size();
            for(int i = 0; i < val; ++i){
                TreeNode* temp = qu.front();
                cout << temp->val << " ";
                if(temp->left)
                    qu.push(temp->left);
                if(temp->right)
                    qu.push(temp->right);
                
                max_ans = max(max_ans, temp->val);
                qu.pop();
            }
            cout << endl;
            ans.push_back(max_ans);
        }
        return ans;
    }
};