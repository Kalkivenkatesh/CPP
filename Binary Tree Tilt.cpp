//Binary Tree Tilt.cpp


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
    int findsum(TreeNode *root)
    {
        if(root==NULL)
        {
            return 0;
        }
        int x;
        x= root->val + findsum(root->left)+ findsum(root->right);
        return x;
    }
    int findTilt(TreeNode* root) 
    {
        if(root==NULL)
        {
            return 0;
        }
        if(root->left==NULL && root->right==NULL)
        {
            return 0;
        }
        int x;
        
        x=abs(findsum(root->left)- findsum(root->right));
        
        x+=findTilt(root->left)+findTilt(root->right);
        return x;
    }
};
