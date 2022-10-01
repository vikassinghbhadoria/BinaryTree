#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
  TreeNode* ans;
  void helper(TreeNode* root,TreeNode* p,TreeNode* q)
  {
    int val=root->val;
    if(val<p->val&&val<q->val)
    {
      helper(root->right,p,q);
    }
    else if(val>p->val&&val>q->val)
    {
      helper(root->left,p,q);
    }
    else
    {
      ans=root;
    }
      return ;
  }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    helper(root,p,q);
      return ans;
    }
};