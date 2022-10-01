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
int diameterOfBinaryTree(TreeNode *root)
{
    int d = 0;
    damn(root, d);
    return d;
}

int damn(TreeNode *root, int &d)
{
    if (root == NULL)
        return 0;
    int ld = damn(root->left, d);
    int rd = damn(root->right, d);
    d = max(d, ld + rd);
    return max(ld, rd) + 1;
}