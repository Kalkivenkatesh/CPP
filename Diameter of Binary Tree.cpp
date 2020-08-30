//Diameter of Binary Tree


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
    int maxHeight(TreeNode* root)
    {
        if(!root)
        {
            return 0;
        }
        return 1 + max(maxHeight(root->left), maxHeight(root->right));
    }
    
    int diameter(TreeNode* root)
    {
        if(!root)
        {
            return 0;
        }
        return maxHeight(root->left)+maxHeight(root->right)+1;
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root)
        {
            return 0;
        }
        int x = diameterOfBinaryTree(root->left)+1;
        int y = diameterOfBinaryTree(root->right)+1;
        return max(diameter(root), max(x,y))-1;  
    }
};
