class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(!root)
            return NULL;
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        TreeNode* temp = q.front();
        q.pop();
        if(temp->left != NULL)
            q.push(temp->left);
        if(temp->right != NULL)
            q.push(temp->right);
            
        TreeNode* t = temp->left;
        temp->left = temp->right;
        temp->right = t;
        
    }
        
       return root;  
    }

};
