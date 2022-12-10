class Solution {
public:
    long long ans = 0;
    long long maxProduct(TreeNode* root) {
        long long total_sum = sum(root);
        cout << solve(root, total_sum);
        return ans % (1000000000 + 7);
    }

    long long sum(TreeNode* root){
        if(!root)
            return 0;
        return root->val + sum(root->left) + sum(root->right);
    }

    long long solve(TreeNode* root, int max_total){
        if(!root)
            return 0;
        long long l = solve(root->left, max_total);
        long long r = solve(root->right, max_total);
        cout << l << " " << r << endl;
        long long s = root->val + l + r;
        ans = max(ans, max((max_total - l)*l,  (max_total - r)*r));
        return s;
    }
};
