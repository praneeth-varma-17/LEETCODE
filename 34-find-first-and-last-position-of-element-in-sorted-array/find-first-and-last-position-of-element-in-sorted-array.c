/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;
    int *arr = (int *)malloc(2 * sizeof(int));
    
    arr[0] = -1;
    arr[1] = -1;
    
    if (numsSize == 0) {
        return arr;
    }

    int low = 0;
    int high = numsSize - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            arr[0] = mid;
            high = mid - 1; 
        } else if (target > nums[mid]) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (arr[0] == -1) {
        return arr;
    }

    low = 0;
    high = numsSize - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            arr[1] = mid;
            low = mid + 1; // Keep searching right
        } else if (target > nums[mid]) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return arr;
}
