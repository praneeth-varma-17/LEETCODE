bool canAliceWin(int* nums, int numsSize) {

    int single_sum = 0;
    int double_sum = 0;

    for(int i = 0; i < numsSize; i++){
        if(nums[i] > 9){
            double_sum += nums[i];
        }
        else{
            single_sum += nums[i];
        }
    }

    if(single_sum == double_sum){
        return false;
    }

    return true;
    
}