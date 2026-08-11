int numIdenticalPairs(int* nums, int numsSize) {

    int good = 0;

    for(int i = 0; i < numsSize; i++){
        for(int j = i; j < numsSize; j++){
            if(j != i){
                if(nums[i] == nums[j]){
                    good++;
                }
            }

        }
    }

    return good;
    
}