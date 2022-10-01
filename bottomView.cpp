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
    vector<int> bottomView(TreeNode *root)
    {
        vector<int> ans;
		if(root == NULL) return ans;
		map<int,int>mp; // col, val;
		queue<pair<TreeNode*, int>>Q; // node, column values
		Q.push({root, 0});
		while(!Q.empty()){
			auto it = Q.front();
			Q.pop();
			TreeNode* node = it.first;
			int col = it.second;
			mp[col] = node->val;
			if(node->left != NULL) Q.push({node->left, col-1});
			if(node->right != NULL) Q.push({node->right, col+1});
		}
		for(auto x:mp){
			ans.push_back(x.second);
		}
		return ans;
	}