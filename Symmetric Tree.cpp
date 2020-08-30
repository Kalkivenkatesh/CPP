//Symmetric Tree


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
    bool ans=true;
    
    bool isSymmetric(TreeNode* root) {
        symmetry(root,root);
        return ans;
    }
    void symmetry(TreeNode* root1,TreeNode* root2){
        if(root1==NULL && root2==NULL) return;
        if(root1==NULL || root2==NULL){
            ans=false;
            return;
        }
        symmetry(root1->left,root2->right);
        if(root1->val!=root2->val) ans=false;
        symmetry(root1->right,root2->left);
    }
};
