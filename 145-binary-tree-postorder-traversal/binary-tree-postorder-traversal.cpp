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
    void postorder(TreeNode* node,vector<int>&a)
    {
        if(node==NULL)
        return ;

        postorder(node->left,a);
        postorder(node->right,a);
        a.push_back(node->val);

    }

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        postorder(root,ans);

        return ans;


        
    }
};