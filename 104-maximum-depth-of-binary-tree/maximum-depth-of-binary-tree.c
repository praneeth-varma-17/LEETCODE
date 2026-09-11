int maxDepth(struct TreeNode* root) {
    if (root == NULL) {
        return 0;
    }

    int x = maxDepth(root->right);
    int y = maxDepth(root->left);

    if (x > y) {
        return 1 + x;
    }
    else {
        return 1 + y;
    }
}