#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* targetIndices(int* nums, int numsSize, int target, int* returnSize) {
    int count_less = 0;
    int count_target = 0;
    
    // Count how many numbers are less than target, and how many match target
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] < target) {
            count_less++;
        } else if (nums[i] == target) {
            count_target++;
        }
    }
    
    // Set the output size required by LeetCode
    *returnSize = count_target;
    
    // If target isn't in the array, return NULL
    if (count_target == 0) {
        return NULL;
    }
    
    // Allocate memory for the resulting indices
    int* result = (int*)malloc(count_target * sizeof(int));
    if (result == NULL) {
        *returnSize = 0;
        return NULL;
    }
    
    // Fill the array with sequential indices starting right after smaller elements
    for (int i = 0; i < count_target; i++) {
        result[i] = count_less + i;
    }
    
    return result;
}
