//Binary Tree Zigzag Level Order Traversal


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
class Solution
{
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode *root)
    {
        if (root == nullptr)
        {
            return vector<vector<int>>();
        }
        bool isLeft2Right = true;
        vector<vector<int>> res;
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            auto level_size = q.size();
            vector<int> curr_level(level_size, 0);
            for (int i = 0; i < level_size; i++)
            {
                TreeNode *curr = q.front();
                q.pop();
                int id = isLeft2Right ? i : level_size - i - 1;
                curr_level[id] = curr->val;
                
                if(curr->left!=nullptr) q.push(curr->left);
                if(curr->right!=nullptr) q.push(curr->right);              
            }
            
            res.push_back(curr_level);
            isLeft2Right = !isLeft2Right;
        }

        return res;
    }
};
