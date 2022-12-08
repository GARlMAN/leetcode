class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector <int> a1;
        vector <int> a2;
        solve(root1, a1);
        solve(root2, a2);
        return a1 == a2;
    }

    void solve(TreeNode* root, vector <int> &a){
        if(!root)
            return;
        if(!root->left && !root->right)
            a.push_back(root->val);
        solve(root->left, a);
        solve(root->right, a);
    }
};
