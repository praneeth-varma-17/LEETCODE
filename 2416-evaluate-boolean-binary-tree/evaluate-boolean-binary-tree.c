

bool evaluateTree(struct TreeNode* root) {
   
    if (root->left == NULL && root->right == NULL) {
        return root->val == 1;
    }
    
    bool leftVal = evaluateTree(root->left);
    bool rightVal = evaluateTree(root->right);
    

    if (root->val == 2) {
        return leftVal || rightVal;
    } else if (root->val == 3) {
        return leftVal && rightVal;
    }
    
    return false;
}
