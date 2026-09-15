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
bool fun(TreeNode * first,TreeNode * second)
    {   if(first==nullptr && second==nullptr)
         return true;
         else if(first==nullptr || second==nullptr)
         return false;
        if(first->val!=second->val)
        return false;
        return fun(first->left,second->left) && fun(first->right,second->right);

    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {

        if(fun(root,subRoot))
        return true;
        bool L=false;
        bool R=false;
        if(root->left)
        L=isSubtree(root->left,subRoot);
        if(root->right)
        R=isSubtree(root->right,subRoot);
        return L||R;
    }
};
