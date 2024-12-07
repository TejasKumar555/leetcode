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

    bool func(TreeNode* root,long mini,long maxi)
    {
        if(root==NULL)
        return true;

        if(root->val>=maxi||root->val<=mini)
        return false;

        return func(root->left,mini,root->val)&&func(root->right,root->val,maxi);

    }
    bool isValidBST(TreeNode* root) {
        
        return func(root,LONG_MIN,LONG_MAX);
    }
};