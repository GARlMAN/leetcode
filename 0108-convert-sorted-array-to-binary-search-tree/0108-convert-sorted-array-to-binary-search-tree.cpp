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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return solve(0, nums.size() - 1, nums);
    }
    TreeNode* solve(int start, int end, vector<int>& nums){
        if(start > end)
            return NULL;
        int a = (start + end) / 2;
        TreeNode*  left = solve(start, a - 1, nums);
        TreeNode* right = solve(a + 1, end, nums);
        TreeNode* ans = new TreeNode;
        ans->val = nums[a];
        ans->left = left;
        ans->right = right;
        return ans;
        
    }
};