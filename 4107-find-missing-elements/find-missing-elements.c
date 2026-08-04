/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findMissingElements(int* nums, int numsSize, int* returnSize) {

    int max = INT_MIN;
    int min = INT_MAX;

    for(int i = 0; i < numsSize; i++){
        if(nums[i] > max){
            max = nums[i];
        }

        if(nums[i] < min){
            min = nums[i];
        }
    }
    

    int n = max - min + 1;
    int *arr = (int *)malloc(n * sizeof(int));

    int index = 0;

    for(int i = min; i <= max; i++){
        int found = 0;
        for(int j = 0; j < numsSize; j++){
            if(i == nums[j]){
                found = 1;
            }


        }
        if(found == 0){
            arr[index] = i;
            index++;
        }
    }

    *returnSize = index;

    return arr;
}