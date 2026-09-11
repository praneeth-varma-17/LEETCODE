int minDepth(struct TreeNode* root) {
    if (root == NULL) {
        return 0;
    }

    int x = minDepth(root->right);
    int y = minDepth(root->left);

    if(x == 0){
        return 1 + y;
    }
    if(y == 0){
        return 1+x;
    }

    if (x > y) {
        return 1 + y;
    }
    else {
        return 1 + x;
    }
}