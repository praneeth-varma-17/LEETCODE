/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

/**
 * Note: The Returned array must be malLoced, assume caller calls free().
 */

// Helper function to count the total number of nodes in the tree
int countNodes(struct TreeNode* root) {
    if (root == NULL) return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}

// Helper function to perform the actual inorder traversal and populate the array
void helper(struct TreeNode* root, int* arr, int* index) {
    if (root == NULL) return;
    
    // 1. Traverse left subtree
    helper(root->left, arr, index);
    
    // 2. Store current node value and increment the array index pointer
    
    
    // 3. Traverse right subtree
    helper(root->right, arr, index);
    arr[*index] = root->val;
    (*index)++;
}

int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    // Count nodes to determine how much memory to allocate
    *returnSize = countNodes(root);
    
    // Dynamically allocate memory for the result array
    int* result = (int*)malloc((*returnSize) * sizeof(int));
    
    // Initialize an index tracker to zero
    int index = 0;
    
    // Run the helper function to populate the array
    helper(root, result, &index);
    
    return result;
}
