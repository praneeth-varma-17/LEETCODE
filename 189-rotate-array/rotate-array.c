void rotate(int* nums, int numsSize, int k) {
    if (numsSize <= 1) return;
    
    k = k % numsSize;
    if (k == 0) return;
    
    int temp[numsSize];
    int i = 0;
    
    for (int j = numsSize - k; j < numsSize; j++) {
        temp[i++] = nums[j];
    }
    
    for (int j = 0; j < numsSize - k; j++) {
        temp[i++] = nums[j];
    }
    
    for (int idx = 0; idx < numsSize; idx++) {
        nums[idx] = temp[idx];
    }
}
