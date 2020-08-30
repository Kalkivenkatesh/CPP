// Flatten Binary Tree to Linked List


class Solution {
public:
    void flatten(TreeNode* root) {
        if(root==NULL) return;
        if(root->left==NULL && root->right ==NULL) return;
        flatten(root->left);
        flatten(root->right);
        if(root->left)
        {
            auto p = root->left;
            while(p->right)
                p = p->right; 
            p->right = root->right;
            root->right = root->left;
            root->left = NULL;
        }
    }
};
