#include<bits/stdc++.h>
using namespace std;
 struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
 void helper(vector<int>&v,TreeNode* root)
    {
        if(root==NULL)
            return;
        
        helper(v,root->left);
        v.push_back(root->val);
        helper(v,root->right);
                    
    }
    vector<int> inorderTraversal(TreeNode* root) {
       vector<int>v;
        
        helper(v,root);
        return v;
        
    }
    int main()
    {
        int t=1;
        // cin>>t;
        while(t--)
        {  
        }

    }
