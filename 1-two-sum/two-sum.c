/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int start;
    int end;
    int* arr = (int*)malloc(2 * sizeof(int));
    int j = 0;
    while(j < numsSize){
        for(int i = 0; i < numsSize; i++){
            if(i != j){
                if(nums[i] + nums[j]== target){
                    arr[0] = i;
                    arr[1] = j;
                    *returnSize = 2;
                    break;
                }
            }
        
        }
        j++;
    }

    
    

    return arr;
    


    
    
}