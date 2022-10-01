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
    vector<vector<int>> levelOrder(TreeNode* root) {
       vector<vector<int>> v;
    // int i = -1;
    if (!root)
        return v;
    queue<TreeNode *> q;
    q.push(root);

    while (!q.empty())
    {
        vector<int> temp;
        int sz = q.size();
        while (sz--)
        {
            auto curr = q.front();
            q.pop();
            temp.push_back(curr->val);
            if (curr->left != NULL)
                q.push(curr->left);
            if (curr->right != NULL)
                q.push(curr->right);
        }
        v.push_back(temp);
    }
    return v;
  
    }