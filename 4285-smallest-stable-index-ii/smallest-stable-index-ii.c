

int firstStableIndex(int* nums, int numsSize, int k) {
    if (numsSize == 0) return -1;

    int* temp_max = (int*)malloc(numsSize * sizeof(int));
    int* temp_min = (int*)malloc(numsSize * sizeof(int));

    int index = 0;
    int max = INT_MIN;
    int min = INT_MAX;

    while (index < numsSize) {
        if (index == 0) {
            max = nums[index];
            temp_max[index] = max;
        } else {
            if (nums[index] > max) {
                max = nums[index];
            }
            temp_max[index] = max;
        }
        index++;
    }

    index = numsSize - 1;
    while (index >= 0) {
        if (index == numsSize - 1) {
            min = nums[index];
            temp_min[index] = min;
        } else {
            if (nums[index] < min) {
                min = nums[index];
            }
            temp_min[index] = min;
        }
        index--;
    }

    int result = -1;
    for (int i = 0; i < numsSize; i++) {
        if (temp_max[i] - temp_min[i] <= k) {
            result = i;
            break;
        }
    }

    free(temp_max);
    free(temp_min);
    return result;
}
