int specialArray(int* nums, int numsSize) {

    for(int j = 1; j <= numsSize; j++){
        
        int count = 0;
        for(int i = 0; i < numsSize; i++){
            if(nums[i] >= j){
                count++;
            }
        }
        if(count == j){
            return j;
        }
    }
    return -1;
    
}