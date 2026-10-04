int findMiddleIndex(int* nums, int numsSize) {
    int prefix[numsSize];
    int suffix[numsSize];

    for(int i = 0; i < numsSize; i++){
        if(i == 0){
            prefix[i] = 0;
        }
        else{
            prefix[i] = prefix[i-1] + nums[i - 1];
        }
    }
    int sum = 0;
    for(int i = 0; i < numsSize; i++){
        sum = sum + nums[i];
    }
    for(int i = 0; i < numsSize; i++){
        if(i == 0){
            suffix[i] = sum - nums[i];
        }
        else{
            suffix[i] = suffix[i - 1] - nums[i];

        }
        
    }

    for(int i = 0; i < numsSize; i++){
        if(prefix[i] == suffix[i]){
            return i;
        }
    }

    return -1;
    
}