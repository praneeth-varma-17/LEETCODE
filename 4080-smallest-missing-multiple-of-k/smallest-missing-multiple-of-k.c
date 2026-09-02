int missingMultiple(int* nums, int numsSize, int k) {
    int max = INT_MIN;

    for(int i = 0; i < numsSize; i++){
        if(max < nums[i]){
            max = nums[i];
        }
    }

    int high = (max / k)+1;
    int i;

    for(i = 1; i <= high; i++){
        int found = 0;
        for(int j = 0; j < numsSize; j++){
            if(i* k != nums[j]){
                found++;

            }
        }
        if(found == numsSize){
            return i*k;
        }
    }
    return i*k;


    
}