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
    int temp(TreeNode * root,int& maxi)
    {

        if(root==NULL)
        return 0;
        int l=max(0,temp(root->left,maxi));
        int r=max(0,temp(root->right,maxi));
        maxi=max(l+r+root->val,maxi);
        return root->val+max(l,r);

    }
    int maxPathSum(TreeNode* root) {
        if(root==NULL)
        return 0;
        int maxi=INT_MIN;
        temp(root,maxi);
        return maxi;
        
    }
};
