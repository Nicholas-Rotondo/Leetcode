/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* traversal(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
    if(root == NULL)
        return NULL;
    else {
        if(p->val < root->val && q->val > root->val) {
            printf("at root\n");
            return root;
        }
        else if(p->val > root->val && q->val > root->val) {
            printf("here1\n");
            return traversal(root->right, p, q);
        }
        else if(p->val < root->val && q->val < root->val) {
            printf("here2\n");
            return traversal(root->left, p, q);
        }
        return root;
    }
}

struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
    return traversal(root, p, q);
}
