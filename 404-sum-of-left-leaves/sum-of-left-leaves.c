/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int sumOfLeftLeaves(struct TreeNode* root) {
    int sum = 0;
    
    if (root == NULL) {
        return 0;
    }
    
    struct TreeNode *newnode = root->left;
    
    if (newnode != NULL && newnode->left == NULL && newnode->right == NULL) {
        sum = sum + newnode->val;
    }
    
    sum = sum + sumOfLeftLeaves(root->left);
    sum = sum + sumOfLeftLeaves(root->right);
    
    return sum;
}
