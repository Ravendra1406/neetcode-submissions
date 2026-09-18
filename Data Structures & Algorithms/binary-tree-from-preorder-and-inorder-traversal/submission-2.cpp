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
        TreeNode* fun(vector<int>&arr,map<int,int>&mp,int& idx,int i,int j)
    {
       if(i>j)
       return NULL;
        TreeNode * root=new TreeNode(arr[idx]);
        int k=mp[arr[idx]];
        idx++;
        root->left=fun(arr,mp,idx,i,k-1);
        root->right=fun(arr,mp,idx,k+1,j);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
                //your code goes here
        map<int,int>mp;
        for(int i=0;i<preorder.size();i++)
        {
            mp[inorder[i]]=i;
        }
        int i=0;
        return fun(preorder,mp,i,0,preorder.size()-1);
    }
};
