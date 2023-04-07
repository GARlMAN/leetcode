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
    vector<TreeNode*> ans;
    vector<TreeNode*> generateTrees(int n) {
        //calling the solve fuction
        return solve(1, n);
    }
    
    vector<TreeNode*> solve(int start, int end){
        //defining the values
        vector<TreeNode*> a;
        //checking if r > l
        if(start > end){
            a.push_back(NULL);
            return a;
        }
        //going through values from start - end  
        for(int i = start; i <= end; ++i){
            vector<TreeNode*> left = solve(start, i - 1);
            vector<TreeNode*> right = solve(i + 1, end);
            
            //appending all the combinations of left to write with int(i)
            for(auto l : left){
                for(auto r : right){
                    TreeNode* temp = new TreeNode;
                    temp->val = i;
                    temp->left = l;
                    temp->right = r;
                    //appending the root to array
                    a.push_back(temp);
                }
            }
        }
        //returning the given vector
        return a;
    }
};