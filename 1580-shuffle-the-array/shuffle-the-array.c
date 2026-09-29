

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){

    int fsize = numsSize;
    int i = 0;
    int j = numsSize/2;
    int k = 0;

    int* anfs = (int*)malloc(fsize * (sizeof(int)));

    while(i <= numsSize/2 && j < numsSize){
        if(k %2 == 0){
            anfs[k] = nums[i];
            i++;
            k++;
        }
        else{
            anfs[k] = nums[j];
            k++;
            j++;
        }

    }

    *returnSize = numsSize;

    return anfs;

}