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
    vector<TreeNode*> allPossibleFBT(int n) {
        vector<TreeNode*> ans;
        //all perfect binary trees should be odd
        if(n % 2 == 0)
            return ans;
        //dp vector
        map <pair<int, int> , vector<TreeNode*>> dp;
        return solve(1, n, dp);
    }
    //solve function
    vector<TreeNode*> solve(int s, int e, map<pair<int, int> ,vector<TreeNode*>> dp){
        vector<TreeNode*> ans;
        //if key already exists
        if (dp.find({s, e}) != dp.end())
            return dp[{s, e}];
        //returning leaf node value
        if(s == e){
            TreeNode* root = new TreeNode;
            root->val = 0;
            ans.push_back(root);
            return ans;
        }
            
        
        for(int i = s; i <= e; ++i){
            if(i % 2 == 0){

                vector<TreeNode*> lefts = solve(s, i - 1, dp);
                vector<TreeNode*> rights = solve(i + 1, e, dp);
                //combination of all left and right nodess
                for(auto left : lefts){                    
                    for(auto right : rights){
                        
                        TreeNode* root = new TreeNode;
                        root->val = 0;
                        root->left = left;
                        root->right = right;
 
                        ans.push_back(root);
                    }
                }
                
                
            }
        }
        //setting dp values and returning
        dp[{s, e}] = ans;
        return ans;
    }
};