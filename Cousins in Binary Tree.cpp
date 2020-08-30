//Cousins in Binary Tree


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
    bool isCousins(TreeNode* root, int x, int y) {
         TreeNode *p1;
  TreeNode* p2;
  
  int d1, d2;
  
  queue<TreeNode*>q;
  q.push(root);
  int l=0;
  while(!q.empty())
  {
      int n= q.size();
      while(n--)
      {
          
          TreeNode* t = q.front();
          q.pop();
          
          if(t->val==x)
              d1=l;
          
          if(t->val==y)
              d2=l;
          
          if(t->left && t->left->val==x)
              p1=t;
          if(t->right && t->right->val==x)
              p1=t;
          
          if(t->left && t->left->val==y)
              p2=t;
          if(t->right && t->right->val==y)
              p2=t;
          
          
          if(t->left)
              q.push(t->left);
          
          if(t->right)
              q.push(t->right);
      }
      
      l++;
  }
  
  if(d1==d2 && p1->val!=p2->val)
      return true;
  else
      return false;
        
    }
};
