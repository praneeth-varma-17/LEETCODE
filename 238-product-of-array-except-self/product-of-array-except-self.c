/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int* ans = (int*)malloc(numsSize * sizeof(int));
    if (ans == NULL) return NULL;

    // Step 1: Calculate left (prefix) products
    ans[0] = 1;
    for (int i = 1; i < numsSize; i++) {
        ans[i] = ans[i - 1] * nums[i - 1];
    }

    // Step 2: Multiply by right (suffix) products on the fly
    int right = 1;
    for (int i = numsSize - 1; i >= 0; i--) {
        ans[i] = ans[i] * right;
        right *= nums[i];
    }

    return ans;
}
