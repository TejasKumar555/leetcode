class Solution {
public:
    TreeNode* getNodeToReplace(TreeNode* node){
        while(node->left){
            node=node->left;
        }
        return node;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        //bc
        if(!root) return NULL;
        // rr
        if(key< root->val){
            root->left= deleteNode(root->left, key );
        }
        else if(key> root->val){
            root->right= deleteNode(root->right, key );
        }
        else{
            // task
            if(!root->left){
                TreeNode* rightChild= root->right;
                delete root;
                return rightChild;
            }
            else if(!root->right){
                TreeNode* leftChild= root->left;
                delete root;
                return leftChild;
            }
            else{
                TreeNode* nodeToReplace= getNodeToReplace(root->right);
                root->val= nodeToReplace->val;
                root->right= deleteNode(root->right, nodeToReplace->val);
            }
        }

        return root;
    }
};