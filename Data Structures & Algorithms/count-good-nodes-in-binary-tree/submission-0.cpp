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
    int fun(TreeNode * root, int mx)
    {
        if(root==NULL)
        return 0;
        if(root->val>=mx)
        {
            mx=root->val;
            return 1+fun(root->left,mx)+fun(root->right,mx);
        }
        return fun(root->left,mx)+fun(root->right,mx);
    }

    int goodNodes(TreeNode* root) {
        if(root==NULL)
        return 0;
        int l=0;
        int r=0;
        if(root->left)
        l=fun(root->left,root->val);
        if(root->right)
        r=fun(root->right,root->val);
        return 1+l+r;

    }
};
