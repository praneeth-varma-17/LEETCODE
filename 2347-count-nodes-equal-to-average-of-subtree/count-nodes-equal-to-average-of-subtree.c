/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int count(struct TreeNode* root){

    if(root == NULL)
        return 0;

    return 1 + count(root->left) + count(root->right);
}
int sum(struct TreeNode* root){
    if(root == NULL)
        return 0;

    return root->val + sum(root->left) + sum(root->right);

}

int averageOfSubtree(struct TreeNode* root) {
    if(root == NULL)
        return 0;

    int sums = sum(root);
    int counts = count(root);

    int avgs = sums / counts;

    int ans = 0;

    if(avgs == root->val)
        ans = 1;

    ans += averageOfSubtree(root->left);
    ans += averageOfSubtree(root->right);

    return ans;
}