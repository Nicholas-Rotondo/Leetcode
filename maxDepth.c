/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int max(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}

int helper(struct TreeNode* root) {
    if (root == NULL) {
        return 0;
    }
    else {
        int rightCount = 1; 
        int leftCount = 1;
        
        if(root->left != NULL) {
            leftCount += helper(root->left);
        } 
        if(root->right != NULL) {
            rightCount += helper(root->right);
        }
        return max(rightCount, leftCount);
    }
}

int maxDepth(struct TreeNode* root){
    return helper(root);
}
