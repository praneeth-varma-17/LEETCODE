/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int dfs(struct TreeNode* node, int currentSum) {
    if (node == NULL) {
        return 0;
    }
    
    currentSum = currentSum * 10 + node->val;
    
    if (node->left == NULL && node->right == NULL) {
        return currentSum;
    }
    
    return dfs(node->left, currentSum) + dfs(node->right, currentSum);
}

int sumNumbers(struct TreeNode* root) {
    return dfs(root, 0);
}
