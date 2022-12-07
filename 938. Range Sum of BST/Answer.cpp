class Solution {
public:
    int sum = 0;
    int rangeSumBST(TreeNode* root, int low, int high) {
            high_low(root, low, high);
            return sum;
    }

    void high_low(TreeNode* root, int low, int high){
        if(!root)
            return;
        if(root->val >= low && root->val <= high)
            sum += root->val;
        high_low(root->left, low, high);
        high_low(root->right, low, high);
    }
};
