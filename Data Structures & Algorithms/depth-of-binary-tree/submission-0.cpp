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
int fun(TreeNode * root, int n)
    {   if(root==nullptr)
        return n;
       
        return max(fun(root->left, n+1),
        fun(root->right,n+1));

    }
    int maxDepth(TreeNode* root) {
        if(root==nullptr)
        return 0;
        return fun(root,0);
     
    }
};
