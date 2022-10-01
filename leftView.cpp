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
void recursion(TreeNode *root, int level, vector<int> &res)
    {
        if(root==NULL) return ;
        
        if(res.size()==level) {
            for(auto x:res)
                cout<<x<<" ";
            cout<<endl;
            res.push_back(root->val);
        }
        recursion(root->left, level+1, res);
        recursion(root->right, level+1, res);
        
    }
    
   
//Function to return a list containing elements of left view of the binary tree.
vector<int> leftView(TreeNode *root)
{
    vector<int> res;
    recursion(root, 0, res);
    return res;
   
}