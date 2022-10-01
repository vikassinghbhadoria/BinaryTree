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

    bool travel(TreeNode* root,long min,long max){
        if(!root)
            return true;
        
        
        if(root->val>min and root->val<max)
            return travel(root->left,min,root->val) and travel(root->right,root->val,max);
        
        
        return false;
    }

    bool isValidBST(TreeNode* root) {
        return travel(root,LONG_MIN,LONG_MAX);
    }
