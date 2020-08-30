//Balanced Binary Tree


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
   int postorder(TreeNode* root,int &x)
    {
        if(root==NULL)
            return 0;
        int ld,rd;
        ld=postorder(root->left,x);
        rd=postorder(root->right,x);
        if(x==1)
        {
            if(abs(ld-rd)>=2)
                x=0;
        }
        return max(ld,rd)+1;
    }
    bool isBalanced(TreeNode* root) 
    {
        int x=1,y;
        y=postorder(root,x);
        return x;
    }
};
