/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

 struct TreeNode* swapChildren(struct TreeNode* subRoot) {
     if(subRoot == NULL) 
        return NULL;
    else {
        struct TreeNode* tempRight = subRoot->right;
        struct TreeNode* tempLeft = subRoot->left;
        subRoot->left = tempRight;
        subRoot->right = tempLeft;
        return subRoot;
    }
 }

struct TreeNode* helper(struct TreeNode* root) {
    if(root == NULL) {
        return NULL;
    }
    else {
        swapChildren(root);
        helper(root->left);
        helper(root->right);
        return root;
    }
}
struct TreeNode* invertTree(struct TreeNode* root){
    return helper(root);
}
