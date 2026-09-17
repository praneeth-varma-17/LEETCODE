void preorder(struct TreeNode* node, int* res, int* idx) {
    if (node == NULL) return;
    res[(*idx)++] = node->val;
    preorder(node->left, res, idx);
    preorder(node->right, res, idx);
}

int countNodes(struct TreeNode* root) {
    if (root == NULL) return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}

int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    int total = countNodes(root);
    int* res = (int*)malloc(total * sizeof(int));
    *returnSize = 0;
    preorder(root, res, returnSize);
    return res;
}
