/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize) {

    int size = 2 * numsSize;
    
    int* an = (int*)malloc(size * sizeof(int));

    for(int i = 0; i < numsSize; i++){
        an[i] = nums[i];
    }

    for(int i = numsSize; i < size; i++){
        an[i] = nums[i-numsSize];
    }

    *returnSize = size;

    return an;

    
    
}