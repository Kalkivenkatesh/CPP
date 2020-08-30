//Construct Binary Tree from Preorder and Inorder Traversal


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
    
    TreeNode* tree(int pr, int st, int end, vector<int>& pre, vector<int>& in) {
        if(pr>pre.size() || st>end)
        {
            return NULL;
        }
            
        TreeNode *p = new TreeNode(pre[pr]);
        int i;
        for(i=st;i<=end;i++)
        {
            if(in[i] == pre[pr])
            {
                break;
            }
        }
        p->left = tree(pr+1, st, i-1, pre, in);
        p->right = tree(pr+i-st+1, i+1, end, pre, in);
        return p;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) 
    {
        return tree(0, 0, inorder.size()-1, preorder, inorder);
    }
};
